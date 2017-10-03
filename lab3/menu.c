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

void sub(void);
void add(void);
void mul(void);
int Help(void);
int Quit(void);



#define char_max_cmd 128

static tDataNode head[] =
{
    {"help","this is help cmd",Help,&head[1]},
    {"quit","quit to thie cmd",Quit,&head[2]},
    {"add","you can input two number to add",add,&head[3]},
    {"sub","you can input two number to sub",sub,&head[4]},
    {"mul","you can input two number to mul",mul,&head[5]},
    {"Version","menu program v1.0",NULL,NULL}

};
// insert code here...

int main(){
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


