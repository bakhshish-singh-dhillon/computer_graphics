#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Enter the coordinates";

int x1,y1,x2,y2,ax,ay,ax1,ay1,ax2,ay2;
cin>>x1>>y1>>x2>>y2;

cout<<"Enter the scaling constants";
cin>>ax>>ay;

ax1=x1*ax;
ay1=y1*ay;
ax2=x2*ax;
ay2=y2*ay;

cout<<"Old Object";
rectangle(x1,y1,x2,y2);

delay(3000);
cleardevice();

cout<<"New Object";
rectangle(ax1,ay1,ax2,ay2);

delay(3000);
getch();
closegraph();
}