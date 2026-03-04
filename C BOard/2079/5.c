#include<stdio.h>
int sum(int);
void main()
{
	int n,s;
	printf("Enter integer : ");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum of Digits = %d",s);
}
int sum(int n)
{
	if(n<10)
		return(n);
	else
	return(sum(n/10)+n%10);
}
