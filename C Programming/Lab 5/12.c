//print 50 asterisk using function
#include<stdio.h>
char ast();
void main()
{
	int i;
	for(i=1;i<=50;i++)
		printf("%c",ast());
}
char ast()
{
	return('*');
}
