#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#define SQUARE(x) ((x)*(x))
void drawcircle(int xc,int yc,int r)
{
int i,x,y,y1;
for(i=xc-r;i<=xc+r;i++)
{
x=i;
y=yc+sqrt(SQUARE(r)-SQUARE(x-xc));
y1=yc-sqrt(SQUARE(r)-SQUARE(x-xc));
putpixel(x,y,WHITE);
putpixel(x,y1,WHITE);
}
}
void main()
{
int gd=DETECT,gm,xc,yc,r;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
xc=getmaxx()/2;
yc=getmaxy()/2;
r=50;
drawcircle(xc,yc,r);
getch();
closegraph();
}
