// Lab 4.1: Write a program to initialize 10 numbers in an array and display them
#include <stdio.h>
void main()
{
	int a[10] = {0, 7, 8, -2, 456, 124, 78, -98, 4, -13}, i;
	printf("Array Elements :\n");
	for (i = 0; i < 10; i++)
		printf("Element %d = %d\n", i + 1, a[i]);
}