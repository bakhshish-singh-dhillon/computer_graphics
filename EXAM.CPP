#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
float x1,y1,x2,y2,dy,dx,m,d;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Enter x1,y1:";
cin>>x1;
cin>>y1;
cout<<"Enter x2,y2:";
cin>>x2;
cin>>y2;
m=(y2-y1)/(x2-x1);
dy=y2-y1;
dx=x2-x1;
d=(2*dy)-dx;
if(m<=1)
{
while(x1<=x2)
{
if(d>=0)
{
x1=x1+1;
y1=y1+1;
d=d+2*(dy-dx);
putpixel(x1,y1,WHITE);
}
else
{
x1=x1+1;
d=d+(2*dy);
putpixel(x1,y1,WHITE);
}
}
}
getch();
closegraph();
}