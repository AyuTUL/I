//commission on sales amount
#include<stdio.h>
void main()
{
	float a,c;
	printf("Enter Sales Amount : ");
	scanf("%f",&a);
	if(a<5000)
		c=0;
	else if(a>=5000 && a<10000)
		c=(5.0/100)*a;
	else if(a>=10000 && a<15000)
		c=(7.0/100)*a;
	else if(a>15000)
		c=(10.0/100)*a;
	printf("Commission = %.2f",c);
}
