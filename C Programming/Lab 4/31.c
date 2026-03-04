//sort {aman,akesh,anish,anam,anil,anju} in alphabetical order
#include<stdio.h>
#include<string.h>
void main()
{
	char n[6][6]={"aman","akesh","anish","anam","anil","anju"},temp[4]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(n[i],n[j])>0)
			{
				strcpy(temp,n[i]);
				strcpy(n[i],n[j]);
				strcpy(n[j],temp);
			}
		}
	}
	printf("Names in Alphabetical Order :\n");
	for(i=0;i<6;i++)
		printf("%s\n",n[i]);
}
