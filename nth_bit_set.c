#include<stdio.h>
int fun(int num,int pos)
{
	if(num&(1<<pos))
			printf("set");
			else
			printf("not set");
}

int main()
{
	int num,pos;
	printf("enter the value:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	fun(num,pos);
}


