//
//  linktable.c
//  commend
//
//  Created by 王振宇 on 2017/10/10.
//  Copyright © 2017年 王振宇. All rights reserved.
//

#include "linktable.h"
#include <stdlib.h>
tLinkTable * CreateLinkTable()
{
    tLinkTable *pTable = (tLinkTable*)malloc(sizeof(tLinkTable));
    pTable->pHead = NULL;
    pTable->pTail = NULL;
    pTable->SumOfNode = 0;
    
    return pTable;
}


int DeleteLinkTable(tLinkTable *pLinkTable)
{
    free(pLinkTable);
    return 0;
}

int AddLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty and cannot add this node!\n");
        exit(0);
    }
    
    if (pNode == NULL)
    {
        printf("The node is empty and cannot add this node!\n");
        return 0;
    }
    
    if (pLinkTable->pHead == NULL)
    {
        pLinkTable->pHead = pNode;
        pLinkTable->pTail = pNode;
        pLinkTable->SumOfNode = 1;
    }else
    {
        pLinkTable->pTail->pNext = pNode;
        pLinkTable->pTail = pNode;
        pLinkTable->SumOfNode++;
    }
    
    return 0;
}

tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty!\n");
        exit(0);
    }
    
    return pLinkTable->pHead;
}
tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty!\n");
        exit(0);
    }
    
    if (pNode == NULL)
    {
        printf("The node is empty and cannot get next node!\n");
        exit(0);
    }
    return pNode->pNext;
}  
