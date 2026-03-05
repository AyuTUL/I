/*
Lab 4.11: Write a program to read age of 20 peoples and count the numbers of child, teen, adult, young, and old. Given:
	Age<13 -- child
	Age>=13 and age<20 -- TEEN
	Age>=20 and age<31 -- Adult
	Age>=31 and age<55 -- Young
	Age>=55 -- Old
*/
#include <stdio.h>
#define max 20
void main()
{
	int a[max], n[5] = {0}, i;
	char cat[5][6] = {"Child", "Teen", "Young", "Adult", "Old"};
	printf("Enter age of 20 people : ");
	for (i = 0; i < max; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < 13)
			n[0]++;
		else if (a[i] >= 13 && a[i] < 20)
			n[1]++;
		else if (a[i] >= 20 && a[i] < 31)
			n[2]++;
		else if (a[i] >= 31 && a[i] < 55)
			n[3]++;
		else if (a[i] >= 55)
			n[4]++;
	}
	printf("\n---------------------\n|%-10s|%-8s|\n---------------------\n", "Category", "Number");
	for (i = 0; i < 5; i++)
		printf("|%-10s|%8d|\n", cat[i], n[i]);
	printf("---------------------");
}