#include<graphics.h>
#include<conio.h>
void iceberg();
void boat(int,int);
void flood(int,int,int,int);
int main(){
    char ch;
    int i=0,j=0,gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(1100,650,"Ship Animation");
    for(i=0;i<640;i=i+30)
    {
    
         setbkcolor(15);
         iceberg();
         boat(i,j);
          delay(500);
         if(i>=630)//drowning condition
         {         	
            for(j=0;j<320;j=j+20)
            {
            boat(i,j);
            delay(100);
        }
        }
    }
    
    getch();
}


void iceberg(){
	
    setcolor(BLUE);
    line(0,502,1100,502);
    line(0,503,1100,503);
    
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
        ellipse(110+i,345+j,0,360,10,7);
        floodfill(112+i,347+j,8);
        ellipse(110+i,325+j,0,360,15,9);
        floodfill(112+i,327+j,8);
    }
    
//drowning boat

    setcolor(BLACK);
    line(100+i,500+j,200+i,500+j);   //lower
    line(101+i,499+j,199+i,499+j);
    setcolor(4);
    line(70+i,460+j,230+i,460+j);
    line(71+i,461+j,229+i,461+j);     //middle
    setcolor(BLACK);
    line(101+i,499+j,71+i,461+j);
    line(100+i,500+j,70+i,460+j);    //lower to middle left

    line(200+i,500+j,230+i,460+j);    //lower to middle right
    line(199+i,499+j,229+i,461+j);

    line(40+i,430+j,260+i,430+j);     // upper
    line(41+i,431+j,259+i,431+j);

    line(70+i,460+j,40+i,430+j);
    line(70+i,460+j,41+i,431+j);      //middle to upper left
    
    line(230+i,460+j,260+i,430+j);      //middle to upper right
    line(230+i,460+j,259+i,431+j);
    
    rectangle(80+i,395+j,210+i,430+j);
    rectangle(100+i,360+j,120+i,395+j);
    
    setcolor(RED);
    setfillstyle(7,RED);
    circle(110+i,415+j,10);
    floodfill(112+i,417+j,RED);
    circle(140+i-1,415+j,10);
    floodfill(142+i,417+j,RED);
    circle(170+i-1,415+j,10);
    floodfill(172+i,417+j,RED);
    delay(100);
}
void flood(int x,int y,int fillColor, int defaultColor)
{
	
    if(getpixel(x,y)==defaultColor)
    {
    	
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);
        flood(x-1,y,fillColor,defaultColor);
        flood(x,y+1,fillColor,defaultColor);
        flood(x,y-1,fillColor,defaultColor);
    }
}
