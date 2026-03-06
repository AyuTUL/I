// Lab 5.7: Write a program to reverse a number using function
#include <stdio.h>
int rev(int);
void main()
{
    int n;
    printf("Enter integer : ");
    scanf("%d", &n);
    printf("Reverse of %d = %d", n, rev(n));
}
int rev(int n)
{
    int r, s = 0;
    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    return s;
}