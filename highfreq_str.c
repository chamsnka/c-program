#include<stdio.h>
int main()
{
	int i,j,len;
 	char str[100];
	char maxchar=0;
	int count=0,maxcount=0;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)//finding in the lenghth of the string
	{
		len++;
		count=0;
	for(j=0;j<len;j++)
	{
		if(str[i]==str[j])//comparing character by character
			count++;
	}
		if(maxcount<count)
		{
			maxcount=count;//store maxcount it occurs in that string
			maxchar=str[i];//store maxchar it occurs in string
		}
	}
		printf("The maximum frequency character is:%c\n",maxchar);
		printf("The maximum frequency is:%d\n",maxcount);
	
}	


