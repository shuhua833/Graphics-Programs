#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void Bresenham(int x1,int y1,int x2,int y2)
{
int x,y,xEND, dx=abs(x2-x1);
int dy=abs(y2-y1);
int pk= 2*dy-dx;
if(x1>x2)
{
x=x2;
y=y2;
xEND=x1;
}
else
{
x=x1;
y=y1;
xEND=x2;
}
putpixel(x,y,WHITE);
while(x<xEND)
{
x++;
if(pk<0)
pk=pk+2*dy;
else
{
y++;
pk=pk+2*dy-2*dx;
}
putpixel(x,y,RED);
delay(5);
}
getch();
}
int main()
{
int x1,x2,y1,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter x1,y1,x2,y2\n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
Bresenham(x1,y1,x2,y2);
closegraph();
return 0;
}
