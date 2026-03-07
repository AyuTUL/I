// Lab 9.1: Write a program to draw two concentric circles of radii 70 and 100 respectively at the center of screen
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm, x, y;
    initgraph(&gd, &gm, (char *)"");
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    circle(x, y, 70);
    circle(x, y, 100);
    getch();
    closegraph();
    return 0;
}