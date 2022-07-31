#include<stdio.h>
#include<conio.h>
void main()
{
int num;
int temp=1;
clrscr();
printf("Enter a number to find highest power:");
scanf("%d",&num);
while((temp*num)<=1000)
{
temp=temp*num;
}
printf("The Greatest power for %d is: %d",num,temp);
getch();
}