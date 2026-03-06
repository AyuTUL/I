// Lab 5.12: Write a program using function to print line of 50 asterisk
#include <stdio.h>
char ast();
void main()
{
	int i;
	for (i = 1; i <= 50; i++)
		printf("%c", ast());
}
char ast()
{
	return ('*');
}