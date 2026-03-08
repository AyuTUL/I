#include<stdio.h>
void main()
{
	int l,i;
	char s[100];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	while(s[l]!='\0')
		l++;
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
			break;
	}
	if(i==l/2)
		printf("%s is palindrome",s);
	else
		printf("%s is not palindrome",s);
}
