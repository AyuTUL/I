//copy string w/o function
#include<stdio.h>
void main()
{
	char s[100],d[100];
	int i;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
		d[i]=s[i];
	d[i]='\0';
	printf("Source = %s\nDestination = %s",s,d);
}
