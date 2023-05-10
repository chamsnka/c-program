#include<stdio.h>
int main()
{
	/*declare the variable*/
	int a[100],i,j,temp,num;
	printf("enter the no.of element  value:\n");
	scanf("%d",&num);
	printf("the element of the array is:\n");
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	for(i=0;i< num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
			
	}
	printf("the sorted array is:\n");
	for(i=0;i<num;i++)
		printf("%d",a[i]);


}
