#include<stdio.h>
struct book
{
	char name[100],author[100];
	float price;
};
void main()
{
	int i;
	struct book b[3];
	printf("Enter book name, author & price of 3 books : ");
	for(i=0;i<3;i++)
	{
		printf("For book %d:\n",i+1);
		fflush(stdin);
		scanf("%[^\n]",b[i].name);
		fflush(stdin);
		scanf("%[^\n]",b[i].author);
		scanf("%f",&b[i].price);
	}
	printf("Authors with price >1000:");
	for(i=0;i<3;i++)
	{
		if(b[i].price>1000)
			printf("\n%s",b[i].author);
	}
}
