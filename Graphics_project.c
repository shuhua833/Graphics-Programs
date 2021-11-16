#include<graphics.h>
#include<conio.h>
int main()
{
	char ch;
	int i,gd = DETECT, gm,col=1,WHITE=BLACK;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  initwindow(1100,650);
  
  for(i=0;i<800;i=i+30)
  {
  	setbkcolor(15);
  	setcolor(BLUE);
  	line(0,502,1100,502);
  	line(0,503,1100,503);
delay(500);
  	if(i==780)
  	{
  		while(i!=0)
  		{
  		
  		setcolor(BLUE);
  	line(0,502,1100,502);
  	line(0,503,1100,503);
delay(500);
cleardevice();
  		setcolor(WHITE);
  	line(100+i-1,500,200+i-1,500);
  	line(101+i-1,499,199+i-1,499);
  	setcolor(4);
  	line(70+i-1,460,230+i-1,460);
  	line(71+i-1,461,229+i-1,461);
  		setcolor(WHITE);
  	line(101+i-1,499,71+i-1,461);
  	line(100+i-1,500,70+i-1,460);
  
    line(200+i-1,500,230+i-1,460);
	line(199+i-1,499,229+i-1,461);
	
	line(40+i-1,430,260+i-1,430);
	line(41+i-1,431,259+i-1,431);

	line(70+i-1,460,40+i-1,430);
	line(70+i-1,460,41+i-1,431);
	
	line(230+i-1,460,260+i-1,430);
	line(230+i-1,460,259+i-1,431);
	rectangle(80+i-1,395,210+i-1,430);
	rectangle(100+i-1,360,120+i-1,395);
	setcolor(8);
	setfillstyle(1,8);
	ellipse(110+i-1,345,0,360,10,7);
	floodfill(112+i-1,347,8);
	ellipse(110+i-1,325,0,360,15,9); 
	floodfill(112+i-1,327,8);
		setcolor(BLUE);
	line(110+i-1,510,190+i-1,510);
	line(110+i-1,511,190+i-1,511);
	line(100+i-1,514,200+i-1,514);
	line(100+i-1,515,200+i-1,515);
line(90+i-1,519,210+i-1,519);
line(90+i-1,520,210+i-1,520);
setcolor(RED);
setfillstyle(7,RED);
circle(110+i-1,415,10);
floodfill(112+i,417,RED);
circle(140+i-1,415,10);
floodfill(142+i,417,RED);
circle(170+i-1,415,10);
floodfill(172+i,417,RED);
	i=i-30;
	  }}
  	cleardevice();
  	setcolor(WHITE);
  	line(100+i,500,200+i,500);
  	line(101+i,499,199+i,499);
  	setcolor(4);
  	line(70+i,460,230+i,460);
  	line(71+i,461,229+i,461);
  		setcolor(WHITE);
  	line(101+i,499,71+i,461);
  	line(100+i,500,70+i,460);
  
    line(200+i,500,230+i,460);
	line(199+i,499,229+i,461);
	
	line(40+i,430,260+i,430);
	line(41+i,431,259+i,431);

	line(70+i,460,40+i,430);
	line(70+i,460,41+i,431);
	
	line(230+i,460,260+i,430);
	line(230+i,460,259+i,431);
	rectangle(80+i,395,210+i,430);
	rectangle(100+i,360,120+i,395);
	setcolor(8);
	setfillstyle(1,8);
	ellipse(110+i,345,0,360,10,7);
	floodfill(112+i,347,8);
	ellipse(110+i,325,0,360,15,9); 
	floodfill(112+i,327,8);
	setcolor(BLUE);
	line(100+i,510,200+i,510);
	line(100+i,511,200+i,511);
	line(90+i,514,210+i,514);
	line(90+i,515,210+i,515);
line(80+i,519,220+i,519);
line(80+i,520,220+i,520);
setcolor(WHITE);
setcolor(RED);
setfillstyle(7,RED);
circle(110+i-1,415,10);
floodfill(112+i,417,RED);
circle(140+i-1,415,10);
floodfill(142+i,417,RED);
circle(170+i-1,415,10);
floodfill(172+i,417,RED);
  }
  getch();
}
