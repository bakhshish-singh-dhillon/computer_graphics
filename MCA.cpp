
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
float x,y,h,k,r,d;
cout<<"Enter the center";
cin>>h>>k;
cout<<"Enter the radius";
cin>>r;
x=0;
y=r;
d=1-r;
while(x<=r/1.41)
{
if(d<0)
{
x=x+1;
d=d+(2*x)+3;
}
if(d>=0)
{
x=x+1;
y=y-1;
d=d+2*(x-y)+5;
}
putpixel(x+h,y+k,WHITE);
putpixel(-x+h,y+k,WHITE);
putpixel(x+h,-y+k,WHITE);
putpixel(-x+h,-y+k,WHITE);
putpixel(y+h,x+k,WHITE);
putpixel(-y+h,x+k,WHITE);
putpixel(y+h,-x+k,WHITE);
putpixel(-y+h,-x+k,WHITE);
}
getch();
closegraph();
}
