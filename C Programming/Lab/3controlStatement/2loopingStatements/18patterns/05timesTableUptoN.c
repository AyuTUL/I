/*
Lab 3.2.18.5: Write a program to generate multiplication table up to number ‘n’ entered by user as:
1×1=1
1×2=2
…
1×10=10
*/
#include <stdio.h>
void main()
{
	int i, j, n;
	printf("Enter nth term : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 10; j++)
			printf("%d x %d = %d\n", i, j, i * j);
		printf("\n");
	}
}