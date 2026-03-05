// Lab 8.2: Write a program to read a positive integer and write its table in file "table.txt"
#include <stdio.h>
void main()
{
	FILE *fp;
	int n, i;
	printf("Enter positive integer : ");
	scanf("%d", &n);
	fp = fopen("table.txt", "w");
	fprintf(fp, "Multiplication table of %d :", n);
	for (i = 1; i <= 10; i++)
		fprintf(fp, "\n%d x %d = %d", n, i, n * i);
	fclose(fp);
	printf("File successfully created.");
}