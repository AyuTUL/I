//WAP to read a text file
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char file[40],ch;
	printf("Enter file to be read : ");
	gets(file);
	fp=fopen(file,"r");
	if(fp==NULL)
	{
		printf("File not found.");
		exit(0);
	}
	printf("Content of file \"%s\" is :\n",file);
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
