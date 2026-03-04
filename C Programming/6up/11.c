//copy a file
#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char f1[30],f2[30],ch;
	printf("Enter text file to be copied : ");
	gets(f1);
	fp1=fopen(f1,"r");
	if(fp1==NULL)
	{
		printf("File doesn't exist.");
		return;
	}
	printf("Enter text file for \"%s\" to be copied into : ",f1);
	gets(f2);
	fp2=fopen(f2,"w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	printf("\"%s\" has been successfully copied into \"%s\".",f1,f2);
}
