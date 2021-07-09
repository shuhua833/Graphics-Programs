#include<stdio.h>
#include<conio.h>
#include<graphics .h>
#include<dos.h>
#include<math.h>
void drawellipse(int xc,int yc,int rx,int ry)
{
int x,y;\
float theta;
const float pi =3.14;
for (theta=0.0;theta<=360;theta++)
{
x=xc+rx*cos(theta*pi/180.0);
y=yc+ry*sin(theta*pi/180.0);
putpixel(x,y,WHITE);
}}
int main()
{
int xc,yc,rx,ry;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter the x and y coordinate:\n ");
scanf("%d%d",&xc,&yc);
printf("enter the radius ofin x and y axis:\n");
scanf("%d%d",&rx,&ry);
drawellipse(xc,yc,rx,ry);
delay(5);
getch();
closegraph();
return 0;
}
