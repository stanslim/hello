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
#include "linktable.h"
#endif /* linklistwithmenu_h */

typedef struct DataNode
{
    tLinkTableNode *pNext;
    char*    cmd;
    char*    desc;
    int      (*handler)();
} tDataNode;

/* find a cmd in the linklist and return the data node pointer */
tDataNode * FindCmd(tLinkTable *head, char *cmd);
/* show all cmd in linklist */
int ShowAllCmd(tLinkTable *head);

