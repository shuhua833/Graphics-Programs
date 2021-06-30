#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
long round(float num){
if(num+0.5>=num+1)
return num+1;
else
return num;
}
void dda(int x1,int y1,int x2, int y2)
{
int dx,dy,steps,k;
float incrx,incry,x,y;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
incrx=dx/steps;
incry=dy/steps;
x=x1;
y=y1;
for(k=0;k<=steps;k++)
{
putpixel(round(x),round(y),5);
x=x+incrx;
y=y+incry;
delay(10);
}
getch();
}
int main(){
int x1,y1,x2,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter x1,y1,x2,y2\n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dda(x1,y1,x2,y2);
return 0;
}
© 2021 GitHub, Inc.
