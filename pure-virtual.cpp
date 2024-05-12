                    // pure virtual fucntion and abstract clases 
#include<iostream>
#include<string>
using namespace std;

/*
class shape {
public: 

// shape is abstract class bcz it is a pure vurtual function  that why we cant create object in the main 
virtual int area()=0;

};

class square : public shape {
private:
int side;
public:

square(int  side) : side(side){
}

int area(){
return side*side;
}

};

class triangle : public shape {
private:
int base;
int height;
public:
triangle(int base, int height) : base(base) , height(height){
}


int area(){
return 1/2*base*height;
}
};

int main(){

shape *shapes[2] ={

new square(5),
new triangle(4,5)
};



int i;
for(i=0;i<2;i++)
shapes[i]->area();

return 0;
}


*/




// abstarct classs bcz  for abstract we need one pure virtual fun 
class test{
public:

// pure virtual fun 
virtual void sound()=0;
};


class instrument : public  test  {
public:



 void sound(){
cout<<"PLaying "<<endl;
}

};

class derived : public test {
public:
 
 
 
 void sound(){
cout<<"Derived is playing : "<<endl;
}

};


int main(){
test  *i1=new instrument;
test *i2=new derived;

i1->sound();
i2->sound();




return 0;
}

