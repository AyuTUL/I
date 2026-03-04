#include<stdio.h>
#include<conio.h>
struct book
{
	char title[100],au[100];
	float cost;
};
void main()
{
	struct book b[4];
	int i;
	float tot=0;
	printf("Enter title, author & cost of 4 books :\n");
	for(i=0;i<4;i++)
	{
		printf("For book %d :\n",i+1);
		fflush(stdin);
		gets(b[i].title);
		fflush(stdin);
		gets(b[i].au);
		scanf("%f",&b[i].cost);
		tot+=b[i].cost;
	}
	printf("Book Details :\n");
	printf("Title\tAuthor\tCost");
	for(i=0;i<4;i++)
		printf("\n%s\t%s\t%.2f",b[i].title,b[i].au,b[i].cost);	
	printf("Total Cost = %.2f",tot);
}
