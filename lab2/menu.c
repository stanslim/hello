#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	char cmd[128];
	int sub();
	int add();
	int mul();
	int square();
	  	
	while(1){
		scanf("%s",cmd);
		if(strcmp(cmd,"help") == 0)
		{
			printf("This is help cmd!\n");
			printf("please scanf your cmd!\n");
			printf("you can input cmd sub add mul div getBigNum getSmallNum quit square\n");
		}
		else if(strcmp(cmd,"quit") == 0)
		{
			exit(0);
		}
		else if(strcmp(cmd,"add") == 0)
		{
			printf("please input your num\n");
			int a,b;
			printf("input your fitst number\n");
			scanf("%d",&a);
			printf("input your second number\n");
			scanf("%d",&b);
			printf("%d + %d is %d!\n",a,b,add(a,b));		
		}
		else if(strcmp(cmd,"sub") == 0)
		{
			int a,b;
			printf("input your first number\n");
			scanf("%d",&a);
			printf("input your second number\n");
			scanf("%d",&b);
			printf("%d -  %d is %d",a,b,sub(a,b));
		}
		else if(strcmp(cmd,"mul") == 0)
		{
			int a,b;
			printf("input your first number\n");
			scanf("%d",&a);
			printf("input your second number\n");
			scanf("%d",&b);
			printf("%d * %d is %d",a,b,mul(a,b));
		}
		else if(strcmp(cmd,"square") == 0)
		{
			int a;
			printf("input your number\n");
			scanf("%d",&a);
			printf("the result is %d",a*a);
		}
		else if(strcmp(cmd,"getBigNum") == 0)
		{	
			int a,b;
			printf("input two number");
			scanf("%d %d",&a,&b);
			if(a>b)
			{
				printf("%d",a);
			}
			else
			{
				printf("%d",b);
			}
		}
		else if(strcmp(cmd,"getSmallNum") == 0)
		{
			int a,b;
			printf("input two number");
			scanf("%d %d",&a,&b);
			if(a<b)
			{
				printf("%d",a);
			}
			else
			{
				printf("%d",b);
			}
		}
		else
		{
			printf("your input id wrong!!!\n");
		}
		
	}
	return 0;
}
int add(int a,int b)
{
	return a+b;
}	
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
