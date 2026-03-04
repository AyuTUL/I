//multiply 2 matrix DMA
#include<stdio.h>
#include<stdlib.h>
void read(int *[],int,int);
void disp(int *[],int,int);
void mul(int *[],int *[],int *[],int,int,int);
void main()
{
	int *a[5],*b[5],*p[5],r1,c1,r2,c2,i;
	printf("Enter order of Matrix A & Matrix B :");
	scanf("%dx%d%dx%d",&r1,&c1,&r2,&c2);
	if(c1!=r2)
	{
		printf("Matrix multiplication not defined.");
		exit(0);
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			a[i]=(int *)malloc(c1*sizeof(int));
			p[i]=(int *)malloc(c2*sizeof(int));
			if(a[i]==NULL || p[i]==NULL)
			{
				printf("Memory allocation failed.");
				exit(0);
			}
		}
		for(i=0;i<r2;i++)
		{
			b[i]=(int *)malloc(c2*sizeof(int));
			if(b[i]==NULL)
			{
				printf("Memory allocation failed.");
				exit(0);
			}
		}
		printf("Enter elements of Matrix A (=%d) : ",r1*c1);
		read(a,r1,c1);
		printf("Enter elements of Matrix B (=%d) : ",r2*c2);
		read(b,r2,c2);
		printf("Matrix A :\n");
		disp(a,r1,c1);
		printf("Matrix B :\n");
		disp(b,r2,c2);
		printf("Matrix A x Matrix B :\n");
		mul(a,b,p,r1,c2,c1);
		disp(p,r1,c2);
		for(i=0;i<r1;i++)
		{
			free(a[i]);
			free(p[i]);
		}
		for(i=0;i<r2;i++)
			free(b[i]);
	}
}
void read(int *m[],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",*(m+i)+j);
}
void disp(int *m[],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%6d",*(*(m+i)+j));
		printf("\n");
	}
}
void mul(int *a[],int *b[],int *p[],int r1,int c2,int c1)
{
	int i,j,k;
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
		{
			*(p[i]+j)=0;
			for(k=0;k<c1;k++)
				*(p[i]+j)+=*(a[i]+k)**(b[k]+j);
		}	
}


