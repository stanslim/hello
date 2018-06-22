//
//  linktable.h
//  commend
//
//  Created by 王振宇 on 2017/10/10.
//  Copyright © 2017年 王振宇. All rights reserved.
//

#ifndef linktable_h
#define linktable_h

#include <stdio.h>
#include <pthread.h>

#define SUCCESS 0
#define FAILURE (-1)


typedef struct LinkTableNode
{
    struct LinkTableNode *pNext;
}tLinkTableNode;

typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int SumOfNode;
  
    
}tLinkTable;

tLinkTable * CreateLinkTable();

int DeletLinkTable(tLinkTable *pLinkTable);

int AddLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode *pNode);

int DelLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode *pNode);

tLinkTableNode * GetLinkTableHead(tLinkTable * pLinkTable);

tLinkTableNode * GetNextLinkTableNode(tLinkTable * pLinkTable,tLinkTableNode * pNode);
#endif /* linktable_h */
