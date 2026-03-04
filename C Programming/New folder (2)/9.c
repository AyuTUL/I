//sum of cube of 1st 10 natural numbers
#include<stdio.h>
void main()
{
	int n,i,s=0;
	for(i=1;i<=10;i++)
		s+=i*i*i;
	printf("Sum of cube of first 10 natural numbers = %d",s);
}
