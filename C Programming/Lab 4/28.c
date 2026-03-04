//count no. of words
#include<stdio.h>
void main()
{
	char line[100];
	int i=0,sp=0;
	printf("Enter line of text : ");
	scanf("%[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ' && line[i+1]!=' ')
			sp++;
	}	
	printf("No. of words = %d",sp+1);
}
