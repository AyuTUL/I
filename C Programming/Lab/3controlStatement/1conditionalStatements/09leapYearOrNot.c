// Lab 3.1.9: WAP a program to check whether a year is leap or not
#include <stdio.h>
void main()
{
	int y;
	printf("Enter year : ");
	scanf("%d", &y);
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		printf("%d is a leap year", y);
	else
		printf("%d is not a leap year", y);
}