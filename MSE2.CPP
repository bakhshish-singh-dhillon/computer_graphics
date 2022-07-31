#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
while(!kbhit())
{
putpixel(random(640),random(150),WHITE);
}

line(0,300,640,300);
line(0,400,640,400);
int i;
for(i=0;i<=640;i=i+40)
{
bar(i,347,i+20,353);
}

for(i=0;(i<=640) || !(kbhit());i++)
{
setcolor(WHITE);
rectangle(i,310,i+40,330);
arc(i+10,333,0,360,3);
arc(i+30,333,0,360,3);
delay(200);
setcolor(BLACK);
rectangle(i,310,i+40,330);
arc(i+10,333,0,360,3);
arc(i+30,333,0,360,3);

}

getch();
getch();
closegraph();
}