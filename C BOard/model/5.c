#include<stdio.h>
void main()
{
	int n;
	printf("Enter integer : ");
	scanf("%d",&n);
	if(n%5==0)
	{
		if(n%11==0)
			printf("Div by both.");
		else
			printf("Div by 5");
	}
	else
	{
		if(n%11==0)
			printf("Div by 11");
		else
			printf("Neither");
}}
