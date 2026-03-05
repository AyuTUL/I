// Lab 6.1: Write a program to read bookid, title, author and price of 10 books using structure and display detail of those books whose author is "Dinesh Khadka".
#include <stdio.h>
#include <string.h>
struct book
{
	int id;
	char title[100], author[20];
	float price;
} s[10];
void main()
{
	int i;
	char p[] = "Dinesh Khadka";
	printf("Enter bookid, title, author & price of 10 books :\n");
	for (i = 0; i < 10; i++)
	{
		printf("For book %d :\n", i + 1);
		scanf("%d", &s[i].id);
		fflush(stdin);
		gets(s[i].title);
		fflush(stdin);
		gets(s[i].author);
		scanf("%f", &s[i].price);
	}
	printf("Books with author Dinesh Khadka :\n");
	printf("| %-7s | %-25s | %-20s | %-8s |", "Book Id", "Title", "Author", "Price");
	for (i = 0; i < 10; i++)
		if (strcmp(s[i].author, "Dinesh Khadka") == 0)
			printf("\n| %7d | %-25s | %-20s | %8.2f |", s[i].id, s[i].title, s[i].author, s[i].price);
}