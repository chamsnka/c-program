#include<stdio.h>
unsigned int reverse_bits(unsigned int num)
{
	unsigned int rev=0;
	while(num>0)
	{		
	 rev<<=1;
	 if(num&1==1)
		rev^=1;
	 num>>=1;
        }
	return rev;
}		
int main()
{
	unsigned int num;
	printf("enter the bit:");
	scanf("%u",&num);
	printf("The reverse_bit is:%u",reverse_bits(num));
	return 0;
}
