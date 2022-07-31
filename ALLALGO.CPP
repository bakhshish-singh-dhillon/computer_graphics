#include<iostream.h>
#include<conio.h>
#include<graphics.h>
class algos
{
private:
float x1,y1,x2,y2,m,b;

public:
void dda()
{
getvalue();
while(x1<=x2)
{
if(m<=1)
{
x1=x1+1;
y1=y1+m;
putpixel(x1,y1,WHITE);
}
if(m>1)
{
y1=y1+1;
x1=(x1+1)/m;
putpixel(x1,y1,WHITE);
}
}
}

void direct()
{
getvalue();
while(x1<=x2)
{
if(m<=1)
{
x1=x1+1;
y1=(m*x)+b;
putpixel(x1,y1,WHITE);
}
if(m>1)
{
y1=y1+1;
x1=(y1-b)/m;
putpixel(x1,y1,WHITE);
}
}
}

void choice(int c)
{
switch (c)
{
case 1:
dda();
break;

case 2:
direct();
break;

default:
cout<<"Wrong Choice";
break;
}
}

void getvalue()
{
cout<<"Enter Start Point:";
cin>>x1>>y1;
cout<<"Enter End Point:"
cin>>x2>>y2;
m=(y2-y1)/(x2-x1);
b=y1-(m*x1);
}
};

void main()
{
int gd=DETECT,gm,c;
initgarph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Enter the algo you want to run \n";
cout<<"1. DDA \n";
cout<<"2. Direct algo \n";
cin>>c;
algos a;
choice(c);
a.choice(c);
getch();
closegraph();
}