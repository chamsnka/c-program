#include<stdio.h>
void main()
{
	char str[100];
	int i,count;
	printf("enter the string:");
	scanf("%s",str);   //receive the string from the user  
	for(i=0;str[i]!='\0';i++)  //iteration for finding the length of string 
		count++;
	printf("the string length%d\n",count);
}	
