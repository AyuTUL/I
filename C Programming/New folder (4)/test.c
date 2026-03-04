#include <stdio.h>
int main()
{
    int day,years,months,days,d1;
    printf("Enter days");
    scanf("%d",&day);
    years=day/365;
    d1=day % 365;
    months = d1 / 30;
    days = d1 % 30;
    printf("Years=%d Months=%d Days=%d",years,months,days);
    return 0;
}