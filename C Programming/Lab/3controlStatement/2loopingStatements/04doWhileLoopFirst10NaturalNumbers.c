// Lab 3.2.4: Write a program to generate first 10 natural numbers using do-while loop
#include <stdio.h>
void main()
{
	int i = 1;
	printf("First 10 Natural Numbers :\n");
	do
	{
		printf("%d\t", i);
		i++;
	} while (i <= 10);
}