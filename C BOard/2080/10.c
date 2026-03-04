#include<stdio.h>
int sum();
void main()
{
	int s;
	s=sum();
	printf("Sum of 1st 10 even numbers = %d",s);
}
int sum()
{
	int i,s=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
			s+=i;
	}
	return(s);
}
