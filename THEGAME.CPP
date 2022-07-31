#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

/* x and y are co-ordinates of center of the circle
xc and yc start incrementing or decrementing inside moveCir() , increment or decrement depends upon the side the ball hits   
xr and yr are x and y co-ordinates of rectangle
ch stores character from keyboard
flagx and flagy determines towards which two sides of screen, the ball should move  */

int xc=200,yc=20,flagx=0,flagy=0,yr=400,xr=0,x=0,y=0,ch;

void moveCir() // It chooses the direction in which the ball moves
{
if(flagx==1 && flagy==1)
{
yc--;
xc--;
}
else if(flagx==0 && flagy==0)
{
xc++;
yc++;
}
else if(flagx==1 && flagy==0)
{
xc--;
yc++;
}
else if(flagy==1 && flagx==0)
{
yc--;
xc++;
}
}

void moveRect() 					// Moves the rectangle
{
if(ch==97 && xr-8>=0) 				// if the user presses 'a' and rectangle is away from x=0, move the rectangle left
{
xr=xr-8;
}
else if(ch==100 && xr+5<560)		// if the user presses 'd' and rectangle is away from x=640 (560+width_rectangle) axis, move the rectangle left
{
xr=xr+8;
}
rectangle(xr,yr,xr+80,yr+20);
setfillstyle(1,BLUE);
floodfill(xr+1,yr+1,WHITE);
}

void check() 						// to check if the ball drops
{
if((y+15)==getmaxy()) 				// the ball touches the base of the screen (Ball Falls)
{
outtextxy(280,240,"Game Over");		// GameOver Notification
ch=27;								// ch=27 is asci code for Ecs key, end while loop
int a;
for(a=800;a>200;a=a-20)				//Produces sound at the end of the game
{
sound(a);
delay(10);
nosound();
}
return;
}
}

void main()
{		
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(xr,yr,xr+80,yr+20);
setfillstyle(1,BLUE);
floodfill(xr+1,yr+1,WHITE);
while(ch!=27) 					// the '27' is ascii code for Esc key
{
setfillstyle(1,RED);   			//Set colour of the ball
circle(x,y,15);					// Draw the Circle
floodfill(x,y+1,WHITE);			//Fill the cirlce untill white border encounters
delay(10);
setfillstyle(1,BLACK);			// Black color is used to hide the ball from screen
circle(x,y,15);
floodfill(x,y+1,BLACK);			// Fill black color in ball
x=xc; 							// The value of xc and yc changes after every iteration
y=yc;							//	the values are changes usind MoveCir Function
if((x+15)==getmaxx()) 			
{
flagx=1;    					//The ball reached end of x axis 
}
if((y+15)==getmaxy() || ((y+18)==yr) && x>=(xr-8) && x<=(xr+85)) //check if the ball hits the rectangle
{
flagy=1;						//The ball reached end of y axis at rectangle
sound(220);
delay(100);
nosound();
}
if((y-15)==0)					//The ball reached start of y axis
{
flagy=0;
}
if(x-15==0)						// the ball reached start of x axis
{
flagx=0;
}
if(kbhit()) 						//Detects the keyboard hit
{
ch=getch();							// Gets the character pressed by the user
rectangle(xr,yr,xr+80,yr+20);
setfillstyle(1,BLACK);
floodfill(xr+1,yr+1,BLACK);
moveRect();
}
moveCir();							//to change xc and yc
check();							//Check if ball missed the rectangle and falls
}
getch();
}

