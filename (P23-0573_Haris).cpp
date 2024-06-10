#include<iostream>
#include<string>
#include<cmath>
using namespace std;



// shape class
class shape {

public:

virtual  void   area(){
}
// contructer
shape(){
}

// destructer
virtual ~shape(){
}

};


// class 2D shape 
class twoDshape : public shape {
public:

// area 
virtual void area(){
}
// volume 
virtual void  volume(){
}

// contructer
twoDshape(){
}

// destructer
virtual ~ twoDshape(){
}

};

// class 3D shape 
class threeDshape : public  shape  {
public :

virtual void  area(){
}

virtual void volume(){
}

// contructer
threeDshape(){
}

// destructer 
virtual ~threeDshape(){
}

};

// class circle 
class circle : public twoDshape {
private:
int radius;

public:
/// contructer
circle(int r ) : radius(r) {
}
// destructer
virtual ~circle(){
}
// area 
virtual void  area(){
cout<<"Area of Circle :"<< radius*radius<<endl;
}

};

// class square
class square : public shape {
private :
int side;
public:

square(int s): side(s) {
}

virtual ~square(){
}
// area function 
virtual void   area(){
cout<<"Area of square :"<<side*side<<endl;
}


};

// cube class
class cube : public threeDshape {
private:
int length,width,height;

public:

cube(int l,int w, int h) : length(l),width(w), height(h){

}

virtual ~cube(){
}

// area overriding function 
virtual  void  area(){
cout<<"Area of cube :"<<2*(length*width +length* height + width * height )<<endl;
}

// volume overriding function 
virtual void volume(){
cout<<"Volume of cube"<< length*width*height<<endl;
}

};


// pyramid class
class pyramid : public threeDshape {
private:
int base,height;
public:

//constructer
pyramid(int b,int h) : base(b), height(h){
}

// destructer
virtual ~pyramid(){
}

// arae overriding function 
virtual void  area(){
cout<<"Area of pyramid : "<< base+base+2*base*sqrt((base/2)*(base/2)+height*height)<<endl;
}

// volume overiding function 
virtual void  volume(){
cout<<"Volume of pyramid :"<< (1.0/3)*base*base*height<<endl;
}

};


int main(){

shape *shapes[5];

shapes[0]=new circle(4);
shapes[1]=new square(5);
shapes[2]=new cube(4,3,2);
shapes[3]=new pyramid(1,2);


for(int i=0;i<4;i++){
shapes[i]->area();      // for the area    we cnat find volume here bcz the shape  class has no member of volume 
delete shapes[i];
}

return 0;
}

//