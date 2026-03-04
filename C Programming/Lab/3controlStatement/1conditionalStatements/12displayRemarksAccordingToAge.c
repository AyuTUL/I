/*
Lab 3.1.12: WAP to read age of a person and display remarks accordingly:
Age			Remarks
Age<12  	CHILD
12<=age<20	TEEN
20<=age<30	ADULT
30<=age<55	YOUNG
Age>=55		OLD
*/
#include <stdio.h>
void main()
{
	int a;
	printf("Enter age: ");
	scanf("%d", &a);
	printf("| Age | Remarks |\n");
	if (a < 12)
		printf("| %-4d| %-8s|", a, "CHILD");
	else if (a >= 12 && a < 20)
		printf("| %-4d| %-8s|", a, "TEEN");
	else if (a >= 20 && a < 30)
		printf("| %-4d| %-8s|", a, "YOUNG");
	else if (a >= 30 && a < 55)
		printf("| %-4d| %-8s|", a, "ADULT");
	else if (a >= 55)
		printf("| %-4d| %-8s|", a, "OLD");
}