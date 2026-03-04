//meter to km and m
#include<stdio.h>
#include<math.h>
void main()
{
	float d,km,m;
	printf("Enter distance in meters : ");
	scanf("%f",&d);
	km=(int)d/1000;
	m=fmod(d,1000);
	printf("\n%.2f m = %.2f km and %.2f m",d,km,m);
}