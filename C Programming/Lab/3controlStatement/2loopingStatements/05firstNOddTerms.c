// Lab 3.2.5: Write a program to generate first ‘n’ odd terms
#include <stdio.h>
void main()
{
	int n, i;
	printf("Enter nth term : ");
	scanf("%d", &n);
	printf("First %d Odd Terms :\n", n);
	for (i = 0; i < n; i++)
		printf("%d\t", 2 * i + 1);
}