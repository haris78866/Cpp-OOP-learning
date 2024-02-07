#include<iostream>


using namespace std;


struct point
{
int x,y;
};


int main()
{
point p1,*p2;


p1.x=2;
p1.y=4;

p2=&p1;
// for pointer always we have  to use member access operater           
cout<<"p2 refer x variable "<<p2->&x<<endl;
cout<<"p2 refer x variable "<<p2->&y<<endl;

return 0;
}
