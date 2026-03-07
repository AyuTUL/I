// Lab 9.2: Write a program to draw square with each side 200 units and coordinate of top left corner (50,50)
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm, top1x, top1y, side;
    initgraph(&gd, &gm, (char *)"");
    top1x = 50;
    top1y = 50;
    side = 200;
    rectangle(top1x, top1y, top1x + side, top1y + side);
    getch();
    closegraph();
    return 0;
}