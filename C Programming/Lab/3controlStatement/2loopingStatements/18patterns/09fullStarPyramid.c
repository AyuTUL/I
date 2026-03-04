/*
Lab 3.2.18.9: Write a program to generate the following figure:
   *
  ***
 *****
*******
*/
#include <stdio.h>
void main()
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3 - i; k++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
}