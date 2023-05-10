#include<stdio.h>
int main()
{
	int num,pos,mask;
	printf("enter the number:");//getting num from user 
	scanf("%d",&num);
	printf("enter the positin:");
	scanf("%d",&pos);  //getting which position should be flip
	mask=(1<<(pos));//shifiting the value by the position given
	num=num^mask;
	printf("the filp_bit is:%d\n",num);
}
