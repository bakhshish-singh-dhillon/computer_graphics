#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Enter the coordinates of rectangle";

int x1,y1,x2,y2,sx,sy,nx1,ny1,nx2,ny2;
cin>>x1>>y1>>x2>>y2;

cout<<"Enter the scaling constants";
cin>>sx>>sy;

nx1=x1*sx;
ny1=y1*sy;
nx2=x2*sx;
ny2=y2*sy;

cout<<"Old Object";
rectangle(x1,y1,x2,y2);

delay(3000);
cleardevice();

cout<<"New Object";
rectangle(nx1,ny1,nx2,ny2);

delay(3000);
getch();
closegraph();
}