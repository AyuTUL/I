/*
Lab 3.2.18.2: Write a program to display the following output:
A B C D E F G H I J
*/
#include <stdio.h>
void main()
{
	char i, c = 'A';
	for (i = 1; i <= 10; i++, c++)
		printf("%c ", c);
}