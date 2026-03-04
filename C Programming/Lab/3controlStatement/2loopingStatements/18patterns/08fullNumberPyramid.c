/*
Lab 3.2.18.8: Write a program to generate the pyramid of number as
    1
   121
  12321
 1234321
123454321
*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}