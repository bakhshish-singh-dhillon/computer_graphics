#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,flag=0;
float lines[4],clip[8],bit[4],win[4];
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Enter the points of line:";
for(i=0;i<4;i++)
{
cin>>lines[i];
}
cout<<"Enter x min and y min";
cin>>win[0]>>win[1];
cout<<"Enter x max and y max";
cin>>win[2]>>win[3];

for(i=0;i<;i++)
{
if(c[0]<win[3])
}
getch();
closegraph();
}