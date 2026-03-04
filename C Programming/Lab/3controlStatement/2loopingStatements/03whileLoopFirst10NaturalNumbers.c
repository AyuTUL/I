// Lab 3.2.3: Write a program to generate first 10 natural numbers using while loop.
#include <stdio.h>
void main()
{
	int i = 1;
	printf("First 10 Natural Numbers :\n");
	while (i <= 10)
	{
		printf("%d\t", i);
		i++;
	}
}