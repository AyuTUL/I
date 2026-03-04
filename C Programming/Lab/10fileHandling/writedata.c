//WAP to write the data in a text file sample.txt
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("File doesn't exist.");
		exit(0);
	}
	printf("Enter data & press CTRL + Z + ENTER to end:\n");
	ch=getchar();
	while(ch!=EOF)
	{
		putc(ch,fp);
		ch=getchar();
	}
	fclose(fp);	
}
