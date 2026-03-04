//uppercase w/o function
#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("Enter string : ");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		//if(s[i]>='a' && s[i]<='z')
		if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	}
	printf("Uppercase = %s",s);
}

