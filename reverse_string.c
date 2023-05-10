#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,len,temp;
	printf("Enter the string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)//count the num of character in string 
		len++;
	for(i=0;i<len/2;i++)//iteration for swapping the charcter to get reverse 
	{
		temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
	}
		printf("The reverse string is:%s\n",a);
}		
