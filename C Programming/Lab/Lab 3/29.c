//base to power
#include<stdio.h>
void main()
{
	int b,p,i,y=0;
	printf("Enter base & power : ");
	scanf("%d%d",&b,&p);
	y=b;
	for(i=1;i<p;i++)
		b=b*b;
	printf("%d to the power %d = %d",y,p,b);
}
