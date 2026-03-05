// Lab 8.3: Write a program to write first N natural numbers in file "numbers.txt" and then read it and write all odd numbers in file "odd.txt" and even numbers in file "even.txt"
#include <stdio.h>
void main()
{
	FILE *nat, *odd, *even;
	int i, n, num;
	printf("Enter nth term : ");
	scanf("%d", &n);
	nat = fopen("numbers.txt", "w");
	for (i = 1; i <= n; i++)
		fprintf(nat, "%d\t", i);
	fclose(nat);
	nat = fopen("numbers.txt", "r");
	if (nat == NULL)
	{
		printf("Error opening file.");
		return;
	}
	odd = fopen("odd.txt", "w");
	even = fopen("even.txt", "w");
	while (fscanf(nat, "%d", &num) != EOF)
	{
		if (num % 2 == 0)
			fprintf(even, "%d\t", num);
		else
			fprintf(odd, "%d\t", num);
	}
	fclose(even);
	fclose(odd);
	fclose(nat);
	printf("Files created successfully.");
}