#include<graphics.h>
#include<conio.h>
#include<math.h>
int deg=1;
void iceberg();
void boat(int,int);
void boat2(int ,int);
void flood(int,int,int,int);
int rx(int x1,int x2,int y1,int y2,float deg)           
{
	
	double radian=deg*0.01745;          //radian conversion so that it gives same value as cos degree
	float r=(x1+(x2-x1)*cos(radian)-(y2-y1)*sin(radian));
	return r;
} 
int ry(int x1,int x2,int y1,int y2,float deg)
{
	
	double radian=deg*0.01745;
	float r=(y1+(x2-x1)*sin(radian)+(y2-y1)*cos(radian));
	return r;
}
int main(){
    char ch;
    int i=0,j=0,gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(1100,650,"Ship Animation");
    for(i=0;i<640;i=i+10)
    {
         setbkcolor(15);
         iceberg();
         boat(i,j);
         delay(500);
         if(i>=610)
		 {
		 	i=i-10;
         	boat(i,j);
		  	delay(1000);
            for(j=0;j<320;j=j+10)
            {
            	i=i+3;
            boat2(i,j);
            delay(100);
        }
        }
    }
    
    getch();
}


void iceberg(){
	
    setcolor(BLUE);
    //setfillstyle(1,11);
    line(0,502,1100,502);
    line(0,503,1100,503);
    //floodfill(5,550,BLUE);
    line(840,502,870,420);
    line(870,420,890,450);
    line(890,450,920,360);
    line(920,360,960,430);
    line(960,430,990,390);
    line(990,390,1050,502);
    //flood(925,450,1,15);
}

void boat(int i,int j)
{

    cleardevice();
    iceberg();
    if(i<630) // smoke and reflection before sinking
    {
    	setcolor(BLUE);//reflection before sinking
        line(100+i,510+j,200+i,510+j);
        line(100+i,511+j,200+i,511+j);
        line(90+i,514+j,210+i,514+j);
        line(90+i,515+j,210+i,515+j);
        line(80+i,519+j,220+i,519+j);
        line(80+i,520+j,220+i,520+j);

        setcolor(8);//ellipse before sinking
        setfillstyle(1,8);
        ellipse(90+i,345+j,0,360,10,7);
        floodfill(92+i,347+j,8);
        ellipse(90+i,325+j,0,360,15,9);
        floodfill(92+i,327+j,8);
    }
int x=0,y=0;
    setcolor(BLACK);
    line(100+i,500+x,200+i,500+y);   //lower
  
    setcolor(4);
    line(70+i,460+x,230+i,460+y);     //middle
    setcolor(BLACK);
   
    line(70+i,460+x,100+i,500+x);    //lower to middle left

    line(200+i,500+y,230+i,460+y);    //lower to middle right
   
   // flood(103+i,497+j,8,15);
    line(40+i,430+x,260+i,430+y);     // upper
    

    line(70+i,460+x,40+i,430+x);    //middle to upper left
    
    line(230+i,460+y,260+i,430+y);      //middle to upper right

    //flood(70+i,436+j,5,15);
    rectangle(80+i,395+x,210+i,430+y);
    rectangle(80+i,360+x,100+i,395+y);
    
    setcolor(RED);
    setfillstyle(7,RED);
    circle(110+i,415+j,10);
    floodfill(112+i,417+j,RED);
    circle(140+i-1,415+j,10);
    floodfill(142+i,417+j,RED);
    circle(170+i-1,415+j,10);
    floodfill(172+i,417+j,RED);
    delay(500);
}
void boat2(int i,int j)
{
    cleardevice();
    iceberg();
	setcolor(BLACK);
    int x=j;
	int y=j;
	int a,b,c,d,e,f,g,h,k,l,m,n;
	c=rx(100+i,200+i,500+j,500+j,deg);
	d=ry(100+i,200+i,500+j,500+j,deg);
    line(100+i,500+j,c,d);                //lower
    a=rx(100+i,70+i,500+j,460+j,deg);
    b=ry(100+i,70+i,500+j,460+j,deg);
    line(100+i,500+x,a,b);             //lower to middle left
    setcolor(4);
    line(a,b, rx(a,230+a-70,b,b,deg), ry(a,230+a-70,b,b,deg));     //middle
    setcolor(BLACK);

   e=rx(c,230+c-200,d,460+d-500,deg);
   f=ry(c,230+c-200,d,460+d-500,deg);
    line(c,d,rx(a,230+a-70,b,b,deg), ry(a,230+a-70,b,b,deg));   //lower to middle right
  
    g=rx(a,40+a-70,b,430+b-460,deg);
    h=ry(a,40+a-70,b,430+b-460,deg);
    line(a,b,g,h);                      //middle to upper left
    m=rx(g,260+g-40,h,h,deg);
    n=ry(g,260+g-40,h,h,deg);
    line(g,h,m,n);                          
         //middle to upper right
    line(m,n,rx(a,230+a-70,b,b,deg), ry(a,230+a-70,b,b,deg));
    
    int p,q,r,s,t,u,v,w,a1,b1,a2,b2,a3,b3;
   p=rx(g,80+g-40,h,h,deg);
   q=ry(g,80+g-40,h,h,deg);     //for points on the upper line
 //  line(g,h,p,q);
   r=rx(p,p,q,395+q-430,deg);
   s=ry(p,p,q,395+q-430,deg);
   line(p,q,r,s);                //left
   t=rx(r,210+r-80,s,s,deg);
   u=ry(r,210+r-80,s,s,deg);
   line(r,s,t,u);                //upper
   v=rx(t,t,u,430+u-395,deg);
   w=ry(t,t,u,430+u-395,deg);
   line(t,u,v,w);                 //right
   //for upper rectangle
   a1=rx(r,r,s,360+s-395,deg);
   b1=ry(r,r,s,360+s-395,deg);
   line(r,s,a1,b1);                 //left
   a2=rx(a1,100+a1-80,b1,b1,deg);
   b2=ry(a1,100+a1-80,b1,b1,deg);
   line(a1,b1,a2,b2);                //upper
   a3=rx(a2,a2,b2,395+b2-360,deg);
   b3=ry(a2,a2,b2,395+b2-360,deg);
   line(a2,b2,a3,b3);                  //right
    setcolor(RED);
    setfillstyle(7,RED);
    circle(rx(100+i,110+i,500+j,415+j,deg),ry(100+i,110+i,500+j,415+j,deg),10);
    floodfill(rx(100+i,110+i,500+j,415+j,deg)+2,ry(100+i,110+i,500+j,415+j,deg)+2,RED);
   
    circle(rx(100+i,140+i,500+j,415+j,deg),ry(100+i,140+i,500+j,415+j,deg),10);
    floodfill(rx(100+i,140+i,500+j,415+j,deg)+2,ry(100+i,140+i,500+j,415+j,deg)+2,RED);
   
    circle(rx(100+i,170+i,500+j,415+j,deg),ry(100+i,170+i,500+j,415+j,deg),10);
    floodfill(rx(100+i,170+i,500+j,415+j,deg)+2,ry(100+i,170+i,500+j,415+j,deg)+2,RED);
    
    delay(1000);
    deg=deg+1;
	
}
