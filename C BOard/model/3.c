#include<stdio.h>
void main()
{
	FILE *nume,*even,*odd;
	int n,a[100],num,i;
	printf("Enter no. of integers : ");
	scanf("%d",&n);
	printf("Enter %d integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	nume=fopen("NUMBER.TXT","w");
	if(nume==NULL)
	{
		printf("Error opening file.");
		return;
	}
	for(i=0;i<n;i++)
		fprintf(nume,"%d ",a[i]);
	fclose(nume);
	even=fopen("EVEN.TXT","w");
	odd=fopen("ODD.TXT","w");
	nume=fopen("NUMBER.TXT","r");
	if(even==NULL || odd==NULL || nume==NULL)
	{
		printf("Error opening file.");
		return;
	}
	while(fscanf(nume,"%d",&num)!=EOF)
	{
		if(num%2==0)
			fprintf(even,"%d ",num);
		else
			fprintf(odd,"%d ",num);
	}
	printf("Files created successfully.");
	fclose(nume);
	fclose(odd);
	fclose(even);
}
