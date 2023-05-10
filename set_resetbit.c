#include<stdio.h> 
void fun2(int num)
{
	int pos,mask;
	printf("enter the position:\n");
	scanf("%d",&pos);
    	mask=(1<<(pos));
	num=num|mask;
	printf("the set bit is:%d",num);
        printf("\n");
}
void fun1(int num)
{
	int pos,mask;
	printf("enter the position:\n");
	scanf("%d",&pos);
	mask=~(1<<(pos));
	num=num&mask;
	printf("the rest bit is:%d",num);
	printf("\n");
}

void main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	fun1(num);
	fun2(num);
}
