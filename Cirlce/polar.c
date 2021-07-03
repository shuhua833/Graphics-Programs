#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#define SQUARE(x) ((x)*(x))
void polarcircle(int xc,int yc,int r)
{
int x,y;
float theta;
for(theta=0.0;theta<=360;theta++)
{
x=xc+r*cos(theta*3.14/180.0);
y=yc+r*sin(theta*3.14/180.0);
putpixel(x,y,WHITE);
}}
void main()
{
int gd=DETECT,gm,xc,yc,r;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter xc,yc and radius\n");
scanf("%d%d%d",&xc,&yc,&r);
polarcircle(xc,yc,r);
getch();
closegraph();
}
