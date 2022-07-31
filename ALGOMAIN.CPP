#include<LineAlgo.h>
void main()
{
int gd=DETECT,gm,c,f;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
do
{
cout<<"\nEnter the algo you want to run \n";
cout<<"1. DDA \n";
cout<<"2. Direct algo \n";
cout<<"3. BLA algo \n";
cout<<"4. Test algo \n";
cout<<"5. Test Origin \n";
cout<<"Enter Choice:";
cin>>c;
LineAlgo obj;
obj.choice(c);
getch();
cout<<"Do you want to do another operation?";
f=getch();
}
while(f=='y');
closegraph();
}

