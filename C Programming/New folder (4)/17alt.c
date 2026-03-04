//odd or even using ternany
#include<stdio.h>
void main()
{
	int n,r;
	printf("Enter number : ");
	scanf("%d",&n);
	r=n%2;
	r==0?printf("Even"):printf("Odd");
}
