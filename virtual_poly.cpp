#include<iostream>
#include<string>
using namespace std;

class shape  {

public:
 
 virtual int area()=0;
 
 };
 
 class square : public shape {
private:
int side;

public:

 square(int side) : side(side){
}

int area(){
return side*side;
}

};


class triangle : public shape {

private:
int base;
int hei;

public :

traingle(int base,int hei) : base(base) , hei(hei){
}


int area(){
return 1/2 *(base*hei);
}




};


int main(){

shape *shapes[2] = {
new square(7);
new triangle(4,5);
}

int i;
for( i=0;i<2;i++){
shapes[i]->area();
}






return 0;
}

