#include<iostream.h>
#include<conio.h>
#include<graphics.h>

float[][] trans(float tx,float ty,int flag)
{
if(flag>0)
{
return {1,0,tx,0,1,ty,0,0,1};
}
else
{
return {1,0,-tx,0,1,-ty,0,0,1};
}
}

float[][] rotation(float theta,int flag)
{
if(flag>0)
{
return {cos(theta),-sin(theat),0,sin(theta),cos(theta),0,0,0,1};
}
else
{
return {cos(theta),sin(theat),0,-sin(theta),cos(theta),0,0,0,1};
}
}


float[][] scaling(float sx,float sy)
{
return {sx,0,0,0,sy,0,0,0,1};
}


float[][] rotation(float theta,char flag)
{
if(flag=='x')
{
return {1,0,0,0,-1,0,0,0,1};
}
else if(flag=='y')
{
return {-1,0,0,0,1,0,0,0,1};
}
else
{
return {-1,0,0,0,1,0,0,0,1};
}
}

float[][] rotation(float shx,float shy)
{
return {sy,1,0,1,sx,0,0,0,1};
}

float[][] multiplication(float a[][],float b[][])
{
int rows=sizeof(b[0])/sizeof(b[0][0]);
int col=sizeof(a[0][0]);
float c[rows][cols];
size=sizeof(b[0][0]);
int i,j,k;
for(i=0;i<cols;i++)
{
for(j=0;j<rows;j++)
{
c[i][j]=0;
for(k=0;k<size;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
return c;
}

void main()
{
int gd=DETECT,gm;
float type,object,x,y,x1,y1,r,i,j,;
float trans[3][3];
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"1.Translation \n";
cout<<"2.Rotation \n";
cout<<"3.Scaling \n";
cout<<"4.Shearing \n";
cout<<"5.Reflection \n";
cout<<"Enter Choice:";
cin>>type;

cout<<"1.Cirlce \n";
cout<<"2.Line \n";
cout<<"3.Ellipse \n";
cout<<"4.Arc\n"
cout<<"5.Rectangle \n";
cout<<"6.Polygon \n";
cout<<"Enter Choice:"
cin>>object;

switch(type)
{
case 1:
int tx,ty,flag;
cout<<"Enter values of tx and ty";
cin>>tx>>ty;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

case 2:
int theta,flag;
cout<<"Enter values of theta";
cin>>theta;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

case 1:
int tx,ty,flag;
cout<<"Enter values of tx and ty";
cin>>tx>>ty;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

case 1:
int tx,ty,flag;
cout<<"Enter values of tx and ty";
cin>>tx>>ty;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

case 1:
int tx,ty,flag;
cout<<"Enter values of tx and ty";
cin>>tx>>ty;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

case 1:
int tx,ty,flag;
cout<<"Enter values of tx and ty";
cin>>tx>>ty;
cout<<"1:Positive\n";
cout<<"2:Negative\n";
cin>>flag;
trans=trans(tx,ty,flag);
break;

}

switch(object)
{
case 1:
cout<<"Enter Radius:";
cin>>r
cout<<"Center:"
cin>>x>>y;
break;

case 2:
cout<<"Enter Point one:";
cin>>x>>y;
cout<<"Enter Point Two:"
cin>>x1>>y1;
break;

case 3:
cout<<"Enter Radius:";
cin>>r
cout<<"Center:"
cin>>x>>y;
cout<<"Enter start and stop angle";
cin>>st>>end;
break;

case 4:
cout<<"Enter Radius:";
cin>>r
cout<<"Center:"
cin>>x>>y;
cout<<"Enter start and stop angle";
cin>>st>>end;
break;

case 5:
cout<<"Enter Point one:";
cin>>x>>y;
cout<<"Enter Point Two:"
cin>>x1>>y1;
break;

case 6:
cout<<"Enter number of point you want to enter";
cin>>count;
float arr[3][count];
for(i=0;i<count;i++)
{
cout<<"Enter Point Number:"<<i;
for(j=0;j<2;j++)
{
cin>>arr[j][i];
arr[j][2]=1;
}
}
break;


}
getch();
closegraph();
}
