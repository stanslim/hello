//
//  linklistwithmenu.h
//  commend
//
//  Created by 王振宇 on 2017/10/3.
//  Copyright © 2017年 王振宇. All rights reserved.
//

#ifndef linklistwithmenu_h
#define linklistwithmenu_h

#include <stdio.h>

#endif /* linklistwithmenu_h */

typedef struct DateNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DateNode *next;
}tDataNode;

tDataNode * FindCmd(tDataNode * head,char * cmd);
int ShowAllCmd(tDataNode* head);
