#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void check()
{
int grd=DETECT,grm,error;
initgraph(&grd,&grm,"C:\\TurboC3\\BGI");
error=graphresult();
if(error!=grOk)
 printf("bekar h bcoz%s",grapherrormsg(error));
}
void firstseen()
{
int x,y,z,l,m,n,o,p,i;
x=getmaxx();
y=getmaxy();
setbkcolor(RED);
for(i=0;i<=x;i++)
{
line(0,y-30,x,y-30);  //downroad road line
line(0,y-80,x,y-80);  //uproad    road line
circle(580-i,50,40);              //sun
line(0,424,60,424);             //road lines betwn road
line(90,424,150,424);
line(180,424,240,424);
line(270,424,330,424);
line(360,424,420,424);
line(450,424,510,424);         //same as above
rectangle(500,399,520,290);   //board on road vertical
rectangle(420,290,600,270); //board horizental
outtextxy(425,280,"HERE YOU GO-->");
line(380,399,395,340);//man leg left
line(410,399,395,340);//right
line(395,340,395,270); //stomach
circle(395,250,20);     //face
line(395,305,375,295);  //left hand
line(395,305,415,295);   //right
// object  which move
circle(60+i,360,39);    //wheel left
circle(200+i,360,39);   //wheel right
line(99+i,360,161+i,360);       //line betn 2 tire
line(239+i,360,270+i,360);        //line from right tire
line(21+i,360,8+i,360);            //line from left tire
line(270+i,360,270+i,290);       //line vertical from right end
line(270+i,290,250+i,290);        //line  horrizontal right top one to left
line(250+i,290,150+i,230);            //slant from r 2 left
line(150+i,230,70+i,230);               //horri from slant
line(70+i,230,8+i,360);                 //again slant from horrizo end to left
circle(60+i,360,25);                  //small wheel
circle(200+i,360,25);		 //smallwheel right
delay(20);
cleardevice();
 }   //for

}//firstseen
void secondseen()
{
int x,y,i;
x=getmaxx();
y=getmaxy();
  for(i=0;i<=x;i++)
  {
  setbkcolor(BLACK);
  // object  which move
circle(60+i,360,39);    //wheel left
circle(200+i,360,39);   //wheel right
line(99+i,360,161+i,360);       //line betn 2 tire
line(239+i,360,270+i,360);        //line from right tire
line(21+i,360,8+i,360);            //line from left tire
line(270+i,360,270+i,290);       //line vertical from right end
line(270+i,290,250+i,290);        //line  horrizontal right top one to left
line(250+i,290,150+i,230);            //slant from r 2 left
line(150+i,230,70+i,230);               //horri from slant
line(70+i,230,8+i,360);                 //again slant from horrizo end to left
circle(60+i,360,25);                  //small wheel
circle(200+i,360,25);		 //smallwheel right
delay(20);
cleardevice();

}//for
}  //second seen

void main()
{
check();
firstseen();
secondseen();

getch();
closegraph();

}