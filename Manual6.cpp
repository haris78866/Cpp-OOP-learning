                                               //   Copy    constructer 
     // when there is defalut constricter then it is a shallow comstructer 
     // when there is user defined constructer then it aka  deep copy                                          
#include<iostream>
#include<string>
using namespace std;
/*
class sample {

private :
int id;
 public :
 void init(int x){
id=x;
}

void display(){
cout<<"ID = "<<id<<endl;
}

};

int main(){

sample obj1;

obj1.init(10);
obj1.display();


// for onject 2
sample obj2;
obj2=obj1;   // basiccally it is known as copy constructer  (shalow copy)   to copy one object value to another object 


obj2.display();   // now in the output we have same value for object 1 and object 2 

return 0;
}


*/





 //    user defined copy constructer
 // in user defined constructer   we act with the   deepy copy
 // by using deep copy we use pointer to copy the data from one object to another
 // shalllow can not tackle the pointer very well  
 // deep copy contructer tackle pointer  efficently 
 
 /*
class  point  {
int x;
int y;

public:
point(int x1,int y1){
x=x1;
y=y1;
}



// user defined copy constructer
point(const point &p){
x=p.x;
y=p.y;
}


int getX(){
return x;
}

int getY(){
return y;
}




}; 

int main () {
point p1(10,20);

// objexct 1 values copy to  another object 

point p2=p1;

cout<<"The value of object 1 are :"<<endl;
cout<<"P1.x "<<p1.getX()<<endl;   
cout<<"P1.y "<<p1.getY()<<endl;

cout<<"The value of object 2 are :"<<endl;
cout<<"P2.x "<<p2.getX()<<endl;
cout<<"P2.y "<<p2.getY()<<endl;

return 0;
}
*/

// In shallow copy the only member variable of the object are coppied and  if the member one pointer , only the memory address they are hold are copied , not the data ponter to those by ponier

// without & it copy all the object data    it will create problem in copy constructer 


// shallow copy example
/*
class circle{
int *radius;

public:
void setradius(int r){
*radius=r;
}


// getter 
int getradius(){
return *radius;
}


void display(){
cout<<"Radius  : "<<*radius<<endl;
}

circle(){
//  you have  to clear 
radius=new int ;
}

};


int main (){

circle c1;
c1.setradius(2);
cout<<"Radius of 1 object :"<<endl;
c1.display();

circle c2;
c2=c1;
cout<<"Radius of second object: "<<endl;
c2.display();



return 0;
}

*/


// deep copy 

class circle{
int *radius;

public:
void setradius(int r){
*radius=r;
}


// getter 
int getradius(){
return *radius;
}


void display(){
cout<<"Radius  : "<<*radius<<endl;
}

circle(){
//  you have  to clear 
radius=new int(0);
}

// now we want to make deep copy 
// user define copy constructer
circle(const circle &c){
cout<<"Copy constructer calling :"<<endl;
radius=new int(*(c.radius));
}

~circle(){
cout<<"destrucetr is excutive : "<< endl;
delete radius;
//free(radius);
}

};


int main (){

circle c1;
c1.setradius(2);
cout<<"Radius of 1 object :"<<endl;
c1.display();

circle c2;
c2=c1;
cout<<"Radius of second object: "<<endl;
c2.display();

return 0;
}
