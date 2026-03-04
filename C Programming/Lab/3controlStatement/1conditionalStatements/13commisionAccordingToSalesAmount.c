/*
Lab 3.1.13: WAP to find sales person commission on sales amount according to following conditions:
Sales amount		Commission
<5000				0%
>=5000 and < 10000	5%
>=10000 and <15000	7%
>=15000				10%
*/
#include <stdio.h>
void main()
{
	float a, c;
	printf("Enter Sales Amount : ");
	scanf("%f", &a);
	if (a < 5000)
		c = 0;
	else if (a >= 5000 && a < 10000)
		c = (5.0 / 100) * a;
	else if (a >= 10000 && a < 15000)
		c = (7.0 / 100) * a;
	else if (a > 15000)
		c = (10.0 / 100) * a;
	printf("Commission = %.2f", c);
}