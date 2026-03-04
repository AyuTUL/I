//meter to km and m
#include<stdio.h>
void main()
{
	int d,km,m;
	printf("Enter distance in meters : ");
	scanf("%d",&d);
	km=d/1000;
	m=d%1000;
	printf("\n%d m = %d km and %d m",d,km,m);
}