
// anand_1947@hotmail.com include all header files
// #include"anand.h"
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <stdio.h>

void main()
{
char a;
int gd,gm;
// printf("\n try graphics inti");
// getchar();
gd=DETECT;
// initgraph(&gd,&gm,"");
   initgraph(&gd, &gm, "C:\\TC\\bgi");

// printf("\n graphics intied");
// getchar();
cleardevice();
// printf("\n clrdevice");
// getchar();
void start();
void entry();
void set1();
void set2();
void select();
void end();
start(); 
getch(); 
cleardevice(); 
select(); 
getch(); 
cleardevice(); 
set1(); 
entry(); 
cleardevice(); 
getch(); 
set2(); 
getch(); 
getch(); 
cleardevice(); 
end(); 
getch(); 
} 
void set1() 
{ 
void card1(); 
void card2(); 
void card3(); 
void card4(); 
void card5(); 
void card6(); 
card1(); 
card2(); 
card3(); 
card4(); 
card5(); 
card6(); 
getch(); 
} 
void set2() 
{ 
for(int i=0;i<=130;i++) 
{ 
setcolor(i); 
rectangle(21+i,21,150,199); 
rectangle(246+i,21,373,199); 
rectangle(471+i,21,600,199); 
rectangle(131+i,239,260,419); 
rectangle(361+i,239,490,419); 
delay(15); 
} 
//1) 
char ch1[]={5,0}; 
setcolor(15); 
for(i=0;i<=130;i++) 
{ 
rectangle(151-i,21,150,199); 
rectangle(376-i,21,373,199); 
rectangle(601-i,21,600,199); 
rectangle(261-i,239,260,419); 
rectangle(491-i,239,490,419); 
delay(15); 
} 
setcolor(4); 
rectangle(20,20,152,200); 
setcolor(0); 
settextstyle(0,0,2); 
outtextxy(30,58,ch1); 
outtextxy(124,150,ch1); 
settextstyle(3,0,4); 
outtextxy(28,18,"3"); 
outtextxy(124,160,"3"); 
settextstyle(0,0,3); 
outtextxy(74,46,ch1); 
outtextxy(74,146,ch1); 
outtextxy(74,96,ch1); 

//2) 
char ch2[]={6,0}; 
setcolor(4); 
rectangle(245,20,377,200); 
setcolor(0); 
settextstyle(0,0,2); 
outtextxy(27+225,54,ch2); 
outtextxy(128+225,150,ch2); 
settextstyle(3,0,4); 
outtextxy(28+225,18,"8"); 
outtextxy(130+225,164,"8"); 
settextstyle(0,0,3); 
outtextxy(56+225,44,ch2); 
outtextxy(56+225,78,ch2); 
outtextxy(56+225,112,ch2); 
outtextxy(56+225,146,ch2); 
outtextxy(94+225,78,ch2); 
outtextxy(94+225,44,ch2); 
outtextxy(94+225,112,ch2); 
outtextxy(94+225,146,ch2); 

//3) 
char ch3[]={4,0}; 
setcolor(4); 
rectangle(470,20,602,200); 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(28+450,58,ch3); 
outtextxy(128+450,150,ch3); 
settextstyle(3,0,4); 
outtextxy(24+450,18,"4"); 
outtextxy(128+450,160,"4"); 
settextstyle(0,0,3); 
outtextxy(56+450,45,ch3); 
outtextxy(96+450,45,ch3); 
outtextxy(56+450,156,ch3); 
outtextxy(96+450,156,ch3); 

//4) 
char ch4[]={4,0}; 
setcolor(4); 
rectangle(130,237,262,420); 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(30+110,276,ch4); 
outtextxy(124+110,368,ch4); 
settextstyle(3,0,4); 
outtextxy(30+110,236,"2"); 
outtextxy(124+110,378,"2"); 
settextstyle(0,0,3); 
outtextxy(74+110,260,ch4); 
outtextxy(74+110,380,ch4); 

//5) 
char ch5[]={4,0}; 
setcolor(4); 
//rectangle(20,237,152,420); 
rectangle(360,237,492,420); 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(33+340,276,ch5); 
outtextxy(124+340,368,ch5); 
settextstyle(4,0,4); 
outtextxy(28+340,236,"A"); 
outtextxy(120+340,378,"A"); 
settextstyle(0,0,4); 
outtextxy(71+340,315,ch5); 
/**/ 

} 
void start() 
{ 
for(int i=0;i<=2000;i++) 
delay(1); 
for(i=2;i<=395;i++) 
{ 
setfillstyle(10,4+i); 
sector(320,240,0,90,200-i,200-i); 
setfillstyle(10,14+i); 
sector(320,240,90,180,200-i,200-i); 
setfillstyle(10,12+i); 
sector(320,240,180,270,200-i,200-i); 
setfillstyle(10,5+i); 
sector(320,240,270,360,200-i,200-i); 
setcolor(i/4); 
delay(15); 
} 
for(i=2;i<=400;i++) 
{ 
setfillstyle(1,6+i); 
sector(320,240,0,90,2+i,2+i); 
setfillstyle(1,17+i); 
sector(320,240,90,180,2+i,2+i); 
setfillstyle(1,-1+i); 
sector(320,240,180,270,2+i,2+i); 
setfillstyle(1,3+i); 
sector(320,240,270,360,2+i,2+i); 
delay(200); 
i=i+9; 
} 
setcolor(0); 
settextstyle(7,0,5); 
outtextxy(158,120,"MIND READER "); 
char ch1[]={2,0}; 
setcolor(4); 
outtextxy(124,150,ch1); 
getch(); 
} 
void card1() 
{ 
char ch1[]={6,0}; 
setcolor(4); 
rectangle(20,20,152,200); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,21,150,199); 
} 
setcolor(0); 
settextstyle(0,0,2); 
outtextxy(30,58,ch1); 
outtextxy(124,150,ch1); 
settextstyle(3,0,4); 
outtextxy(28,18,"3"); 
outtextxy(124,160,"3"); 
settextstyle(0,0,3); 
outtextxy(74,46,ch1); 
outtextxy(74,146,ch1); 
outtextxy(74,96,ch1); 
void far *buf1[5000]; 
getimage(18,18,155,205,buf1); 
for(i=1;i<=400;i++) 
{ 
putimage(18+i,18,buf1,0); 
} 
} 
void card2() 
{ 
char ch2[]={5,0}; 
setcolor(4); 
rectangle(20,20,152,200); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,21,150,199); 
} 
setcolor(0); 
settextstyle(0,0,2); 
outtextxy(27,54,ch2); 
outtextxy(128,150,ch2); 
settextstyle(3,0,4); 
outtextxy(28,18,"8"); 
outtextxy(130,164,"8"); 
settextstyle(0,0,3); 
outtextxy(56,44,ch2); 
outtextxy(56,78,ch2); 
outtextxy(56,112,ch2); 
outtextxy(56,146,ch2); 
outtextxy(94,78,ch2); 
outtextxy(94,44,ch2); 
outtextxy(94,112,ch2); 
outtextxy(94,146,ch2); 
void far *buf2[5000]; 
getimage(18,18,155,205,buf2); 
for(i=1;i<=250;i++) 
{ 
putimage(18+i,18,buf2,0); 
} 
} 
void card3() 
{ 
char ch1[]={3,0}; 
setcolor(4); 
rectangle(20,20,152,200); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,21,150,199); 
} 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(28,58,ch1); 
outtextxy(128,150,ch1); 
settextstyle(3,0,4); 
outtextxy(24,18,"4"); 
outtextxy(128,160,"4"); 
settextstyle(0,0,3); 
outtextxy(56,45,ch1); 
outtextxy(96,45,ch1); 
outtextxy(56,156,ch1); 
outtextxy(96,156,ch1); 
void far *buf1[5000]; 
getimage(18,18,155,205,buf1); 
for(i=1;i<=87;i++) 
{ 
putimage(18+i,18,buf1,0); 
} 
} 
void card4() 
{ 
char ch3[]={3,0}; 
setcolor(4); 
rectangle(20,237,152,420); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,239,150,419); 
} 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(30,276,ch3); 
outtextxy(124,368,ch3); 
settextstyle(3,0,4); 
outtextxy(30,236,"2"); 
outtextxy(124,378,"2"); 
settextstyle(0,0,3); 
outtextxy(74,260,ch3); 
outtextxy(74,380,ch3); 
void far *buf2[5000]; 
getimage(18,237,155,425,buf2); 
for(i=1;i<=400;i++) 
{ 
putimage(18+i,237,buf2,0); 
} 
} 
void card5() 
{ 
char ch3[]={3,0}; 
setcolor(4); 
rectangle(20,237,152,420); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,239,150,419); 
} 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(33,276,ch3); 
outtextxy(124,368,ch3); 
settextstyle(4,0,4); 
outtextxy(28,236,"A"); 
outtextxy(120,378,"A"); 
settextstyle(0,0,4); 
outtextxy(71,315,ch3); 
void far *buf2[5000]; 
getimage(18,237,155,425,buf2); 
for(i=1;i<=250;i++) 
{ 
putimage(18+i,237,buf2,0); 
} 
} 
void card6() 
{ 
char ch3[]={4,0}; 
setcolor(4); 
rectangle(20,237,152,420); 
setcolor(15); 
for(int i=0;i<=130;i++) 
{ 
rectangle(21+i,239,150,419); 
} 
setcolor(4); 
settextstyle(0,0,2); 
outtextxy(27,274,ch3); 
outtextxy(130,365,ch3); 
settextstyle(3,0,4); 
outtextxy(28,234,"6"); 
outtextxy(130,374,"6"); 
settextstyle(0,0,3); 
outtextxy(56,259,ch3); 
outtextxy(56,314,ch3); 
outtextxy(56,368,ch3); 
outtextxy(94,314,ch3); 
outtextxy(94,259,ch3); 
outtextxy(94,368,ch3); 
void far *buf2[5000]; 
getimage(18,237,155,425,buf2); 
for(i=1;i<=87;i++) 
{ 
putimage(18+i,237,buf2,0); 
} 
} 
void entry() 
{ 
for(int i=0;i<=320;i++) 
{ 
setcolor(i); 
rectangle(1+i,1,630,470); 
rectangle(640-i,470,1,1); 
delay(1); 
} 
for(i=0;i<=320;i++) 
{ 
setcolor(0); 
rectangle(320+i,1,0,470); 
rectangle(320-i,470,1,1); 
delay(15); 
} 
setcolor(14); 
settextstyle(2,0,15); 
outtextxy(2,200," Concentrate on your card "); 
for(i=0;i<=630;i++) 
{ 
setcolor(15); 
rectangle(0+i,400,630,420); 
delay(14); 
} 
cleardevice(); 
outtextxy(75,200," Now your card is a "); 
settextstyle(7,0,5); 
outtextxy(165,250," LOST SOUL "); 
getch(); 
} 

void select() 
{ 
settextstyle(7,0,8); 
setcolor(6); 
outtextxy(0,120,"Select One card"); 
outtextxy(30,220,"in your mind"); 
} 
void end() 
{ 
setcolor(6); 
settextstyle(4,0,7); 
outtextxy(0,80," Made By - "); 
outtextxy(0,200," Anand Bora and"); 
outtextxy(0,300," Saurabh Wahegaonkar"); 
}
