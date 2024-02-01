#include<iostream>
#include<cmath>

using namespace std;

int main ()
{

// takig all the cordinate 
int x1,x2,y1,y2;
cout<<"Enter the value for x1"<<endl;
cin>>x1;

cout<<"Enter the value for x2"<<endl;
cin>>x2;

cout<<"Enter the value for y1"<<endl;
cin>>y1;

cout<<"Enter the value for y2"<<endl;
cin>>y2;


int d;
d=(x2-x1)+(y2-y1);

// takig square root 
int distance=sqrt(d);


cout<<"DIstance b/w two : "<<distance<<endl;


return 0;
}

