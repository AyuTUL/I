//compute b^p
#include<stdio.h>
#include<math.h>
void main()
{
	float b,r;
	int p;
	printf("Enter base & power : ");
	scanf("%f%d",&b,&p);
	r=pow(b,p);
	printf("\n%.2f to the power %d = %.2f",b,p,r);
}