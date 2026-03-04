#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f;
	char ch;
	f=fopen("Rev.txt","r");
	if(f==NULL)
	{
		printf("File doesn't exist.");
		exit(0);
	}
	fseek(f,-3,2);
	do
	{
		ch=getc(f);
		putchar(ch);
		
	}while(!fseek(f,-2,1));
	fclose(f);
}

