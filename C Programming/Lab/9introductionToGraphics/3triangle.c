// Lab 9.3: Write a program to draw a triangle using line() function
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(200, 200, 300, 300);
    line(200, 200, 200, 300);
    line(200, 300, 300, 300);
    getch();
    closegraph();
    return 0;
}