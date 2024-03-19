#include<iostream>
#include<string>
using namespace std;


                                 // constucter delegation 
 /*                                
class info {
private:
string name;
string city;
int age;
int zip;

public:

info(string name,string city,int age){
this->name=name;
this->city=city;
this->age=age;
}

info(string name,string city,int age,int zip) : info(name,city,age)
{

this->zip=zip;
zip=0;
}

void display()
{
cout<<"Name :"<<name<<endl;
cout<<"City :"<<city<<endl;
cout<<"Age  :"<<age<<endl;
cout<<"Zip  :"<<zip<<endl;
}
};

int main(){

info obj1("Haris","ISB",20);

obj1.display();

return 0;
}

*/

/*
class basic {
private:
int x;
public:

basic(int x){
this->x=x;
}

basic(const basic & x){
this->x=x.x;
}

void display(){
cout<<"X :"<<x<<endl;
}

};

int main(){
basic obj1(4);
obj1.display();

basic obj2=obj1;

obj2.display();


return 0;
}
*/

                                                          // deep copy 
/*
class info{
private :
int *radius;
public:

info(){
radius=new int(0);
}

info(const info &c){
radius=new int(*(c.radius));
cout<<"Constucter is executive: "<<endl;
}

~info(){
delete radius;
}

// getter 
int getradius(){
return *radius;
}

// setters
void setradius(int radius){
*this->radius=radius;
}

void display(){
cout<<"Radius : "<<*radius<<endl;
}

};

int main(){
info c1;
c1.setradius(2);

c1.display();
info c2;
c2=c1;
c2.display();


exit(0);
return 0;
}

*/



class circle {
private :
int *radius;
public:

circle(){
radius=new int;
}

// user defined constructer
circle(const circle & c ){
radius=new int(*(c.radius));
}

~circle(){
delete radius;
}

int getradius(){
return *radius;
}

void setradius(int radius){
*this->radius=radius;
}

void display(){
cout<<"Radius : "<<*radius<<endl;
}


};

int main(){
circle c1;
c1.setradius(10);
cout<<"Radius :"<<c1.getradius()<<endl;

//c1.display();



exit(0);
return 0;
}


