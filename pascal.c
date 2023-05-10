//PASCAL LAW:
#include<stdio.h>
void main()
{
	int i,j,spc=1,row,c=1;
	printf("enter the number of rows");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(spc=1;spc<=row-i;spc++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
				c=1;
			else 
				c=c*(i-j+1)/j;
			printf("%d ",c);
		}
	
  	        printf("\n");
	}
}		
