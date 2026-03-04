// Lab 3.2.18.7: Design the layout of chess board using nested loop. [hint use ASCII 219 for white and 255 for black square box]
#include <stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		if (i % 2 == 0)
			for (j = 1; j <= 4; j++)
				printf("%c%c%c", 255, 219);
		else
			for (j = 1; j <= 4; j++)
				printf("%c%c", 219, 255);
		printf("\n");
	}
}