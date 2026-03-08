#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	int n,i;
	f1=fopen("Num.txt","r");
	f2=fopen("Prime.txt","w");
	if(f1==NULL || f2==NULL)
	{
		printf("Allocation failed");
		return;
	}
	while(fscanf(f1,"%d",&n)!=EOF)
	{
		if(n<=1)
			continue;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
				break;
		}
		if(i>n/2)
			fprintf(f2,"%d ",n);
	}
	fclose(f2);
	fclose(f1);
	printf("File created succesfully.");
}
