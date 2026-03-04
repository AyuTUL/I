//days into year, months and days
#include<stdio.h>
void main()
{
	int t,y,m,d;
	printf("Enter no. of days : ");
	scanf("%d",&t);
	y=t/365;
	m=(t%365)/30;
	d=(t%365)%30;
	printf("\n%d days = %d years %d months %d days",t,y,m,d);
}