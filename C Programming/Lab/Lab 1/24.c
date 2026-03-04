//chessboard
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=4;j++)
				printf("%c%c%c%c",255,219,255,219);
		}
		else
		{
			for(j=1;j<=4;j++)
				printf("%c%c%c%c",219,255,219,255);
		}
		printf("\n");
	}
}
