//
//  main.c
//  commend
//
//  Created by 王振宇 on 2017/10/3.
//  Copyright © 2017年 王振宇. All rights reserved.
//
#include<string.h>
#include<stdlib.h>
#include <stdio.h>
#include "linklistwithmenu.h"
#include "linktable.h"
void sub(void);
void add(void);
void mul(void);
int Help(void);
int Quit(void);



#define char_max_cmd 128

int InitMenuData(tLinkTable ** ppLinkTable)
{
    *ppLinkTable = CreateLinkTable();
    tDataNode * pNode = (tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd = "help";
    pNode->desc = "Menu List:";
    pNode->handler = Help;
    AddLinkTableNode(*ppLinkTable, (tLinkTableNode*)pNode);
    pNode = (tDataNode*)(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd = "version";
    pNode->desc = "Menu Program V1.0";
    pNode->handler = NULL;
    AddLinkTableNode(*ppLinkTable, (tLinkTableNode*)pNode);
    pNode = (tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd = "quit";
    pNode->desc = "Quit from Menu Program V1.0";
    pNode->handler = Quit;
    AddLinkTableNode(*ppLinkTable, (tLinkTableNode*)pNode);
    
    return 0;
}
tLinkTable * head = NULL;

// insert code here...

int main(){
    InitMenuData(&head);  
    while(1)
    {
        
        char cmd[char_max_cmd];
        
        printf("输入指令");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("this is a wrong cmd");
            continue;
        }
        printf("%s - %s\n",p->cmd,p->desc);
        if (p->handler != NULL)
        {
            p->handler();
        }
  
    }
}
void add()
{
    int a,b;
    printf("please input your num\n");
    printf("input your fitst number\n");
    scanf("%d",&a);
    printf("input your second number\n");
    scanf("%d",&b);
    printf("%d + %d is %d!\n",a,b,a+b);
}
void sub()
{
    int a,b;
    printf("please input your num\n");
    printf("input your fitst number\n");
    scanf("%d",&a);
    printf("input your second number\n");
    scanf("%d",&b);
    printf("%d + %d is %d!\n",a,b,a-b);
    
}

void mul()
{
    int a,b;
    printf("please input your num\n");
    printf("input your fitst number\n");
    scanf("%d",&a);
    printf("input your second number\n");
    scanf("%d",&b);
    printf("%d + %d is %d!\n",a,b,a*b);}
int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Quit()
{
    exit(0);
}


