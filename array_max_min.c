#include<stdio.h>
void main()
{
	int a[100],num,i,max,min;
	printf("Enter the size of array:");
	scanf("%d",&num);
	printf("Enter the elements of the array:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<num;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
		printf("the minimum array of the element %d\n",min);
		printf("the maximum array of the element %d\n",max);
}	 
