#include<graphics.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	
	char ch;
	int i,j,gd = DETECT, gm,col=1,WHITE=BLACK;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(1100,650);
 //To move the boat forward
  for(i=0;i<660;i=i+30)
  {
  //	readimagefile("bluesky.jpg",0,0,555,260);
  	//readimagefile("bluesky.jpg",555,0,1100,260);
  	setbkcolor(15);        //White background
  	setcolor(BLUE);        // Blue color for sea and iceberg 
  	line(0,502,1100,502);     //sea
  	line(0,503,1100,503);     //sea
  	line(840,502,870,420);    //ice
  	line(870,420,890,450);    //ice
  	line(890,450,920,360);     //
  	line(920,360,960,430);     //
  	line(960,430,990,390);     //
  	line(990,390,1050,502);    //
  	delay(500);
  	
  	//sink
  	 if(i>=630)      //iceberg at this position
  {

  for(j=0;j<300;j=j+20)      // to move ship downwards
  {
  	//readimagefile("blusky.jpg",0,0,555,260);
  	//readimagefile("bluesky.jpg",555,0,1100,260);
  	cleardevice();
  		setcolor(BLUE);
  	line(0,502,1100,502);
  	line(0,503,1100,503);
  	line(840,502,870,420);
  	line(870,420,890,450);
  	line(890,450,920,360);
  	line(920,360,960,430);
  	line(960,430,990,390);
  	line(990,390,1050,502);
  	
  	setcolor(WHITE);
  	line(100+i,500+j,200+i,500+j);
  	line(101+i,499+j,199+i,499+j);
  	setcolor(4);
  	line(70+i,460+j,230+i,460+j);
  	line(71+i,461+j,229+i,461+j);
  		setcolor(WHITE);
  	line(101+i,499+j,71+i,461+j);
  	line(100+i,500+j,70+i,460+j);
  
    line(200+i,500+j,230+i,460+j);
	line(199+i,499+j,229+i,461+j);
	
	line(40+i,430+j,260+i,430+j);
	line(41+i,431+j,259+i,431+j);

	line(70+i,460+j,40+i,430+j);
	line(70+i,460+j,41+i,431+j);
	
	line(230+i,460+j,260+i,430+j);
	line(230+i,460+j,259+i,431+j);
	rectangle(80+i,395+j,210+i,430+j);
	rectangle(100+i,360+j,120+i,395+j);
setcolor(WHITE);
setcolor(RED);
setfillstyle(7,RED);
circle(110+i-1,415+j,10);
floodfill(112+i,417+j,RED);
circle(140+i-1,415+j,10);
floodfill(142+i,417+j,RED);
circle(170+i-1,415+j,10);
floodfill(172+i,417+j,RED);
delay(100);

  }
  exit(0);
  }

  	cleardevice();
  	setcolor(BLACK);
  	line(100+i,500,200+i,500);     //lower 
  	line(101+i,499,199+i,499);
  	setcolor(4);
  	line(70+i,460,230+i,460);       //middle red line
  	line(71+i,461,229+i,461);
  		setcolor(BLACK);
  	line(101+i,499,71+i,461);       //lower to middle left
  	line(100+i,500,70+i,460);
  
    line(200+i,500,230+i,460);       //lower to middle right
	line(199+i,499,229+i,461);
	
	line(40+i,430,260+i,430);        //upper
	line(41+i,431,259+i,431);

	line(70+i,460,40+i,430);          //middle to upper left
	line(70+i,460,41+i,431);
	
	line(230+i,460,260+i,430);           //middle to upper right
	line(230+i,460,259+i,431);
	
	rectangle(80+i,395,210+i,430);
	rectangle(100+i,360,120+i,395);
	
	setcolor(8);
	setfillstyle(1,8);
	ellipse(110+i,345,0,360,10,7);        //smoke
	floodfill(112+i,347,8);
	ellipse(110+i,325,0,360,15,9); 
	floodfill(112+i,327,8);
	
	setcolor(BLUE);                       //
	line(100+i,510,200+i,510);
	line(100+i,511,200+i,511);
	line(90+i,514,210+i,514);
	line(90+i,515,210+i,515);
line(80+i,519,220+i,519);
line(80+i,520,220+i,520);

setcolor(BLACK);                           //window
setcolor(RED);
setfillstyle(7,RED);
circle(110+i,415,10);
floodfill(112+i,417,RED);
circle(140+i-1,415,10);
floodfill(142+i,417,RED);
circle(170+i-1,415,10);
floodfill(172+i,417,RED);
}

  
  getch();

}
