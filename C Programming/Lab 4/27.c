//remove all space
#include<stdio.h>
void main()
{
	char line[100],ns[100];
	int i,l=0;
	printf("Enter line of text : ");
	scanf("%[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ' || line[i]=='\t')
			continue;
		else
		{
			ns[l]=line[i];
			l++;
		}
	}
	printf("Line without space :\n");
	printf("%s",ns);
}
