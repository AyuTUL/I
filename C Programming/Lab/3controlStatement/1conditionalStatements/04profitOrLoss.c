// Lab 3.1.4: WAP to read cost price and selling price of a good and find profit or loss amount
#include <stdio.h>
void main()
{
	float cp, sp, r;
	printf("Enter cost price & selling price : ");
	scanf("%f%f", &cp, &sp);
	if (cp > sp)
	{
		r = cp - sp;
		printf("Loss = %.2f", r);
	}
	else
	{
		r = sp - cp;
		printf("Profit = %.2f", r);
	}
}