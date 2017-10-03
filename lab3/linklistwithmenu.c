//
//  linklistwithmenu.c
//  commend
//
//  Created by 王振宇 on 2017/10/3.
//  Copyright © 2017年 王振宇. All rights reserved.
//

#include "linklistwithmenu.h"
int ShowAllCmd(tDataNode* head)
{
    printf("Menu LIst:\n");
    tDataNode *p = head;
    while (p != NULL) {
        printf("%s - %s\n",p->cmd,p->desc);
        p = p->next;
    }
    return 0;
}
tDataNode * FindCmd(tDataNode * head,char * cmd)
{
    if (head == NULL||cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL){
        if(strcmp(cmd,p->cmd) == 0)
        {
            return p;
        }
        p= p->next;
    }
    return  NULL;
}
