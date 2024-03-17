#include<iostream>
#include<string>
using namespace std;
/*
class info {

private:
int id;

public:

void test(int x){
id=x;
}

void display(){
cout<<"ID : "<<id<<endl;
}
};


int main(){
info obj1;

obj1.test(9);
obj1.display();

// making its copy constructer
info obj2;
obj2=obj1;

obj2.display();


return 0;
}
*/

class info {

private:
int x,y;

public:

info(int x1,int y1){
x=x1;
y=y1;
}

// copy constructer 

info(const info &p1){
x=p1.x;
y=p1.y;
}

int getx(){
return x;
}

int gety(){
return y;
}

};


int main(){

info p1(10,20);

cout<<"p1.x "<<p1.getx()<<"p1 .y "<<p1.gety()<<endl;

info p2;
p2=p1;

cout<<"p2.x "<<p2.getx()<<"p2 .y "<<p2.gety()<<endl;

return 0;
}
