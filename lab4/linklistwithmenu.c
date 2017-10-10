//
//  linklistwithmenu.c
//  commend
//
//  Created by 王振宇 on 2017/10/3.
//  Copyright © 2017年 王振宇. All rights reserved.
//

#include "linklistwithmenu.h"
#include "linktable.h"
int ShowAllCmd(tLinkTable* head)
{
    printf("Menu LIst:\n");
    tDataNode *p = (tDataNode*)GetLinkTableHead(head);
    while (p != NULL) {
        printf("%s - %s\n", p->cmd, p->desc);
        p = (tDataNode*)GetNextLinkTableNode(head, (tLinkTableNode*)p);  
    }
    return 0;
}
tDataNode * FindCmd(tLinkTable * head,char * cmd)
{
    tDataNode *p = (tDataNode*)GetLinkTableHead(head);
    while (p != NULL)
    {
       if (strcmp(p->cmd, cmd) == 0)
       {
            return p;
        }
     
     p = (tDataNode*)GetNextLinkTableNode(head, (tLinkTableNode*)p);
    }
    return NULL;
}
