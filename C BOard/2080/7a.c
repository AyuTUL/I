#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],temp[100];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	strcpy(temp,s);
	strrev(s);
	if(strcmp(temp,s)==0)
		printf("%s is palindrome",temp);
	else
		printf("%s is not palindrome",temp);
}
