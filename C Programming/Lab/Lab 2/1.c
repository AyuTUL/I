//lowercase character to uppercase
#include<stdio.h>
void main()
{
	char l,w;
	printf("Enter lowercase character : ");
	scanf("%c",&l);
	if(l>='a' && l<='z')
	{
		w=l-32;
		printf("Uppercase of %c = %c",l,w);
	}
	else
		printf("Wrong input. Please try again.");
}
