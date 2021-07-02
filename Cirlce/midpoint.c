#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void drawpoints(int x,int y,int xc,int yc)
{
putpixel(xc+x, yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
}
void circlemidpoint(int xc,int yc,int r)
{
int x=0,y=r,p=1;
drawpoints(x,y,xc,yc);
while(x<y){
x++;
if(p<0)
p+=2*x+1;
else{
y--;
p+=2*(x-y)+1;
}
drawpoints(x,y,xc,yc);
}}
void main(){
int xc,yc,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enterthe center coordinates");
scanf("%d%d",&xc,&yc);
printf("enter the radius");
scanf("%d",&r);
circlemidpoint(xc,yc,r);
getch();
closegraph();
}
