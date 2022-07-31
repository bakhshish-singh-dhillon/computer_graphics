#include<LineAlgo.h>

void LineAlgo::line1(int x,int y,int x1,int y1)
{
m=(y1-y)/(x1-x);
c=y-(m*x);
while(x<=x1 && y<=y1)
{
if(m<=1)
{
x=x+1;
y=(m*x)+c;
putpixel(x,y,RED);
}
else
{
y=y+1;
x=(y-c)/m;
putpixel(x,y,RED);
}
}
}

void LineAlgo::line2(int x,int y,int x1,int y1)
{
m=(y1-y)/(x1-x);
while(x<=x1 && y<=y1)
{
if(m<=1)
{
x=x+1;
y=y+m;
putpixel(x,y,RED);
}
else
{
y=y+1;
x=(1/m)+x;
putpixel(x,y,RED);
}
}
}