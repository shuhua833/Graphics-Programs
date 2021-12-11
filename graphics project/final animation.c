#include<graphics.h>
#include<conio.h>
#include<math.h>
void iceberg(); 
void boat(int,int);
void boat2(int ,int);
void flood(int,int,int,int);
float rx(int x1,int x2,int y1,int y2)           
{
	float degree=10;
	double radian=degree*0.01745;
	float r=(x1+(x2-x1)*cos(radian)-(y2-y1)*sin(radian));
	return r;
} 
float ry(int x1,int x2,int y1,int y2)
{
	float degree=10;
	double radian=degree*0.01745;
	float r=(y1+(x2-x1)*sin(radian)+(y2-y1)*cos(radian));
	return r;
}
int main(){
    char ch;
    int i=0,j=0,gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(1100,650,"Ship Animation");
    for(i=0;i<640;i=10+i)
    {
    
         setbkcolor(15);
         iceberg();
         boat(i,j);
          delay(50);
         if(i>=610)//drowning condition
         {   
				boat(i,j);	
				delay(2000);  
            for(j=0;j<320;j=j+1)
            {
            boat2(i,j);
            delay(500);
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
    
//drowning boat
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
    

    line(70+i,460+x,40+i,430+x);
        //middle to upper left
    
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
    //delay(500);
}
void boat2(int i,int j)
{
		
    cleardevice();
    iceberg();
	  setcolor(BLACK);
	  int x=j;
	  int y=j;
	  int c,d,e,f,g,h,k,l,m,n,z=45*0.01745;
	  c=rx(100+i,200+i,500+j,500+j);
	  d=ry(100+i,200+i,500+j,500+j);
    line(100+i,500+j,c,d);
  //  line(101+i,499+x,199+i,499+y);
  int a=rx(100+i,70+i,500+j,460+j);
  int b=ry(100+i,70+i,500+j,460+j);
  line(100+i,500+x,a,b);//lowe to middle left
    setcolor(4);
    line(a,b, rx(a,230+a-70,b,b), ry(a,230+a-70,b,b)); 
   //line(a,b,rx(a,230+i,b,460+j),ry(a,230+i,b,460+j));     //middle
    setcolor(BLACK);

 //   line(70+i,460+x,100+i,500+x);    //lower to middle left   

  //  line(200+i,500+y,230+i,460+y);    //lower to middle right
   e=rx(c,230+c-200,d,460+d-500);
   f=ry(c,230+c-200,d,460+d-500);
    line(c,d,rx(a,230+a-70,b,b), ry(a,230+a-70,b,b));
   // flood(103+i,497+j,8,15);
    //line(40+i,430+x,260+i,430+y);     // upper
    //line(41+i,431+x,259+i,431+y);

   // line(70+i,460+x,40+i,430+x);
    //line(70+i,460+x,41+i,431+x);      //middle to upper left
    g=rx(a,40+a-70,b,430+b-460);
    h=ry(a,40+a-70,b,430+b-460);
    line(a,b,g,h);
    m=rx(g,260+g-40,h,h);
    n=ry(g,260+g-40,h,h);
    line(g,h,m,n);                           //middle
   // line(230+i,460+y,260+i,430+y);      //middle to upper right
    line(m,n,rx(a,230+a-70,b,b), ry(a,230+a-70,b,b));
    //line(230+i,460+y,259+i,431+y);
    //flood(70+i,436+j,5,15);
   // rectangle(80+i,395+x,210+i,430+y);
    // line(80+i,395+x,80+i,430+x);    //left
   // line(80+i,395+x,210+i,395+y); //upper
   // line(210+a,430+y,210+b,430+y);
  //  rectangle(80+i,360+x,100+i,395+y);
    int p,q,r,s,t,u,v,w,a1,b1,a2,b2,a3,b3;
   p=rx(g,80+g-40,h,h);
   q=ry(g,80+g-40,h,h);
 //  line(g,h,p,q);
 r=rx(p,p,q,395+q-430);
 s=ry(p,p,q,395+q-430);
   line(p,q,r,s);
   t=rx(r,210+r-80,s,s);
   u=ry(r,210+r-80,s,s);
   line(r,s,t,u);
   v=rx(t,t,u,430+u-395);
   w=ry(t,t,u,430+u-395);
   line(t,u,v,w);
   //for upper rect
   a1=rx(r,r,s,360+s-395);
   b1=ry(r,r,s,360+s-395);
   line(r,s,a1,b1);
   a2=rx(a1,100+a1-80,b1,b1);
   b2=ry(a1,100+a1-80,b1,b1);
   line(a1,b1,a2,b2);
   a3=rx(a2,a2,b2,395+b2-360);
    b3=ry(a2,a2,b2,395+b2-360);
   line(a2,b2,a3,b3);
    setcolor(RED);
    setfillstyle(7,RED);
     circle(110+i+13,415+j,10);
   floodfill(112+i+13,417+j,RED);
    circle(140+i+13,415+j+6,10);
   floodfill(142+i+13,417+j+6,RED);
    circle(170+i+13,415+j+12,10);
    floodfill(172+i+13,417+j+12,RED);
    delay(1000);
	
}
