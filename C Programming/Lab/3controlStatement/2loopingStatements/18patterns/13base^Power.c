// Lab 3.2.18.13: Write a program to find the value of given base to the given power. [y=ab]
#include <stdio.h>
void main()
{
	int b, p, i, s = 1;
	printf("Enter base & power : ");
	scanf("%d%d", &b, &p);
	for (i = 1; i <= p; i++)
		s *= b;
	printf("%d to the power %d = %d", b, p, s);
}