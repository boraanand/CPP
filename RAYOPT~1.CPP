/*
------------------------------------------------------------
|	     RAY OPTICS VIRTUAL CLASSROOM		   |
|   							   |
|							   |
|							   |
 -----------------------------------------------------------
*/
// header files
#include<graphics.h>
#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<fstream.h>
// variables and function for mouse pointer
int b,xx,yy;
union REGS i,o;
initmouse();
showmouse();
hidemouse();
void restrictmouse(int x1,int y1,int x2,int y2);
void getmousestatus( int *button,int *x,int *y);

// functions
void start();
void intro();
void mirror();
void mirror_ani();
void glass();
void glass_ani();
void prism();
void prism_ani();
void credits();

void main()
{

int gd,gm;
gd=DETECT;
// initgraph(&gd,&gm," ");
 initgraph(&gd, &gm, "C:\\TC\\bgi");
cleardevice();
start();
}

void start() // function for main menu
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

  setcolor(15);
  initmouse();
  restrictmouse(0,0,0,0);
  restrictmouse(0,0,getmaxx(),getmaxy());
  setbkcolor(0);
  settextstyle(10,0,2);
  outtextxy(30,50," RAY OPTICS VIRTUAL CLASSROOM");
  outtextxy(100,150," => INTRODUCTION");
  outtextxy(100,200," => MIRROR");
  outtextxy(100,250," => GLASS SLAB");
  outtextxy(100,300," => PRISM ");
  outtextxy(100,350," => CREDITS ");
  outtextxy(100,400," => EXIT ");
  settextstyle(2,0,6);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);

     if(xx>=100&&yy>=150&&xx<=400&&yy<=200)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   intro();
	}
     }

 if(xx>=100&&yy>=200&&xx<=400&&yy<=250)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   mirror();
	}
     }

     if(xx>=100&&yy>=250&&xx<=400&&yy<=300)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   glass();
	  }
     }



if(xx>=100&&yy>=300&&xx<=400&&yy<=350)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   prism();
	}
     }


if(xx>=100&&yy>=350&&xx<=400&&yy<=400)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	 hidemouse();
	   cleardevice();
	 credits();

	}
     }

if(xx>=100&&yy>=400&&xx<=400&&yy<=450)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	 exit(0);

	}
     }


}
}
void prism()   // PRISM
{

setcolor(15);
 char *line;
 ifstream fin;
 fin.open("prism.txt",ios::nocreate);
 int i;
 i=0;
 while(!fin.eof())
 {
 for(int t=0;t<2;t++)
 rectangle(t,t,639-t,479-t);
 fin.getline(line,2000,'\n');
 outtextxy(0,i,line);
 delay(50);
 i+=20;
 }
 fin.close();
 outtextxy(360,400," MAIN MENU ");
 rectangle(360,400,500,440);
 outtextxy(500,400," ANIMATION ");
 rectangle(500,400,630,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   prism_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }


}


void intro()  // INTRODUCTION
{
setcolor(15);

char *line;
ifstream fin;
fin.open("intro.txt",ios::nocreate);
int i,j;
i=1;j=1;
while(!fin.eof())
{
for(int t=0;t<2;t++)

rectangle(t,t,639-t,479-t);

fin.getline(line,2000,'\n');
outtextxy(0,i,line);
delay(50);
i+=20;
j++;
if(j%23==0)
{
getch();
cleardevice();
j=1;
i=1;
}
}
fin.close();



outtextxy(510,405," MAIN MENU ");
rectangle(500,400,630,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=6390&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }

}
void prism_ani()  // PRISM ANIMATION
{
cleardevice();

for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

outtextxy(20,20," When white light incidents on the surface of a prism");
outtextxy(20,35," it splits up into its seven constituent colors");

setcolor(15);
int i;
float x,y;
x=0;y=300;

line(400,275,320,150);
line(320,150,250,275);
line(250,275,400,275);

while(x<281&&y>216)
{
line(0,300,x,y);
x=x+3.5;
y=y-1;
if(x==259)
{
line(140,250,160,255);
line(145,268,160,255);
}
delay(50);

}




for(x=0;x<75;x++)
{
setcolor(15);
setfillstyle(1,RED);
pieslice(281,219,15,20,x);

setcolor(6);
setfillstyle(1,6); //               color
pieslice(281,219,10,15,x+1);

setcolor(15);
setfillstyle(1,YELLOW);
pieslice(281,219,5,10,x+4);

setcolor(GREEN);
setfillstyle(1,GREEN);
pieslice(281,219,0,5,x+7);

setcolor(BLUE);
setfillstyle(1,BLUE);
pieslice(281,219,355,360,x+11);

setcolor(3);
setfillstyle(1,3);
pieslice(281,219,350,355,x+17);

setcolor(5);
setfillstyle(1,5);
pieslice(281,219,345,350,x+26);

delay(50);
}



   //2nd refraction



for(int j=0;j<175;j++)
{
setcolor(RED);
setfillstyle(1,RED);
pieslice(343,195,338,344,j);

setcolor(6);
setfillstyle(1,6);
pieslice(347,200,337,341,j);

setcolor(YELLOW);
setfillstyle(1,YELLOW);
pieslice(350,205,333,338,j);

setcolor(GREEN);
setfillstyle(1,GREEN);
pieslice(353,210,330,335,j);

setcolor(BLUE);
setfillstyle(1,BLUE);
pieslice(358,217,325,331,j);

setcolor(3);
setfillstyle(1,3);
pieslice(362,224,320,327,j);

setcolor(5);
setfillstyle(1,5);
pieslice(370,235,315,323,j);

if(j<30)
delay(0);
else delay(50);
}
setcolor(15);

outtextxy(500,400," REPLAY");
rectangle(500,400,630,440);
outtextxy(360,400," MAIN MENU ");
rectangle(360,400,500,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   prism_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }




}


void glass()  // GLASS
{
setcolor(15);

char *line;
ifstream fin;
fin.open("glass.txt",ios::nocreate);
int i,j;
i=1;j=1;
while(!fin.eof())
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

fin.getline(line,2000,'\n');
outtextxy(0,i,line);
delay(50);
i+=20;
j++;
if(j%23==0)
{
getch();
cleardevice();
j=1;
i=1;
}
}
fin.close();


outtextxy(500,400," ANIMATION ");
rectangle(500,400,630,440);
outtextxy(360,400," MAIN MENU ");
rectangle(360,400,500,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   glass_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }



}


void glass_ani() // GLASS ANIMATION
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

outtextxy(20,20," When a ray incidents on the surface of a glass slab");
outtextxy(20,35," it undergoes two refraction and the emergent ray is");
outtextxy(20,50," parallel to the incident ray.");

float x,y;

 //glass slab
 setcolor(15);
 line(260,110,420,110);
 line(260,310,420,310);
 line(260,110,260,310);
 line(420,110,420,310);


x=0;y=350;
while(x<262&&y>219)
{
line(0,350,x,y);
x=x+2;
y=y-1;
delay(50);
}
// normal 1
setlinestyle(1,1,1);
line(197,219,325,219);

// dotted line
setlinestyle(3,1,1);
line(262,219,600,140-120);

// refracted ray
setlinestyle(0,1,1);
x=262;y=219;
while(x<422&&y>179)
{
line(262,219,x,y);
x=x+4;
y=y-1;
delay(100);
}

// normal 2
setlinestyle(1,1,1);
line(355,179,495,179);

// emergent ray
setlinestyle(0,1,1);
x=422;y=179;
while(x<641&&y>57)
{
line(422,179,x,y);
x=x+1.75;
y=y-1;
delay(50);
}

outtextxy(500,400," REPLAY ");
rectangle(500,400,630,440);
outtextxy(360,400," MAIN MENU ");
rectangle(360,400,500,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   glass_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }

}
void mirror()  // MIRROR
{
setcolor(15);

char *line;
ifstream fin;
fin.open("mirror.txt",ios::nocreate);
int i,j;
i=1;j=1;
while(!fin.eof())
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

fin.getline(line,2000,'\n');
outtextxy(0,i,line);
delay(50);
i+=20;
j++;
if(j%23==0)
{
getch();
cleardevice();
j=1;
i=1;
}
}
fin.close();

outtextxy(500,400," ANIMATION ");
rectangle(500,400,630,440);
outtextxy(360,400," MAIN MENU ");
rectangle(360,400,500,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   mirror_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }


}

 void mirror_ani() // MIRROR ANIMATION
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

outtextxy(20,20,"When light rays from infinity fall on surface of");
outtextxy(20,35,"a concave mirror they converge at focus to form a");
outtextxy(20,50,"point image");
 setcolor(15);

 for(int i=0;i<5;i++)
 arc(100+i,240,330,30,300);

 line(0,240,640,240);

 for(i=0;i<400;i++)
 {
 line(0,140,i-13,140);
 line(0,340,i-13,340);
 delay(12);
  }

float x1,x2,y1,y2;

x1=385;y1=340;

x2=387;y2=140;

while((x1>240||y1>240)||(x2>240||y2<40))
{


 line(385,340,x1,y1);
 line(387,140,x2,y2);

x1-=1;
y1-=1;

x2-=1;
y2+=1;

delay(15);
}
settextstyle(8,0,1);
outtextxy(50,124," > ");
outtextxy(50,324," > ");
settextstyle(2,0,4);
for(i=0;i<3;i++)
circle(285,240,i);
outtextxy(0,120," Rays form infinity ");
outtextxy(400,120," Concave Mirror ");
outtextxy(250,250," Point image at focus ");

settextstyle(2,0,6);


outtextxy(500,400," REPLAY ");
rectangle(500,400,630,440);
outtextxy(360,400," MAIN MENU ");
rectangle(360,400,500,440);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=500&&yy>=400&&xx<=639&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   mirror_ani();
	}
     }

     if(xx>=360&&yy>=400&&xx<=500&&yy<=440)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   start();
	}
     }
 }
}


void credits()  // CREDITS
{
setcolor(15);
settextstyle(2,0,7);
char *line;
ifstream fin;
fin.open("credits.txt",ios::nocreate);
int i,j;
i=1;j=1;
while(!fin.eof())
{
for(int t=0;t<2;t++)
rectangle(t,t,639-t,479-t);

fin.getline(line,2000,'\n');
outtextxy(0,i,line);
delay(50);
i+=20;
j++;
if(j%23==0)
{
getch();
cleardevice();
j=1;
i=1;
}
}
fin.close();


outtextxy(540,440,"  MENU ");
rectangle(540,440,630,470);

  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=540&&yy>=440&&xx<=639&&yy<=479)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	    start();
	}

     }
 }
}


initmouse() // function to initialize mouse
{
  i.x.ax=0;
  int86(0x33,&i,&o);
  return(o.x.ax);
}

showmouse() // function to display mouse pointer
{
  i.x.ax=1;
  int86(0x33,&i,&o);
  return(o.x.ax);
}

hidemouse() // function to hide mouse pointer
{
  i.x.ax=2;
  int86(0x33,&i,&o);
  return(o.x.ax);
}

void restrictmouse(int x1,int y1,int x2,int y2)  // function to restrict
{                                               // mouse pointer
  i.x.ax=7;
  i.x.cx=x1;
  i.x.dx=x2;
  int86(0x33,&i,&o);
  i.x.ax=8;
  i.x.cx=y1;
  i.x.dx=y2;
  int86(0x33,&i,&o);
}

void getmousestatus(int *button,int *x,int *y) // function to show status of
{					       // mouse pointer
  i.x.ax=3;
  int86(0x33,&i,&o);
  *button=o.x.bx;
  *x=o.x.cx;
  *y=o.x.dx;
 }
