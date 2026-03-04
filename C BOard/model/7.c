#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int c=0,i=0;
	printf("Enter string : ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]=='I')
			c++;
		i++;
	}
	printf("No. of I = %d",c);
}
