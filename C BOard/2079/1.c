#include<stdio.h>
void main()
{
	int i,y;
	float r=1,x;
	printf("Enter base & power : ");
	scanf("%f%d",&x,&y);
	if(y>0)
	{
		for(i=1;i<=y;i++)
			r*=x;	
	}
	else if(y<0)
	{
		for(i=1;i<=-y;i++)
			r*=1/x;
	}
	printf("%g ^ %d = %g",x,y,r);
}
