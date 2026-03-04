//count no. of words
#include<stdio.h>
void main()
{
	char line[100],prev=' ';
	int i=0,w=0;
	printf("Enter line of text : ");
	scanf("%[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if((line[i]==' ') && (prev!=' '))
		{
			w++;
		}
		prev=line[i];
	}	
	printf("No. of words = %d",w);
}
