#include<iostream>
#include<string>
using namespace std;


/*
class base{
private:
int x;

public:

base(int x) : x(x){
}

void overide(){
cout<<"Base "<<endl;
}

};

class derived : public base {

public :

derived(int x)  : base(x){
}



};

int main(){

base p(3);
p.overide();

derived d(3);
d.overide();

return 0;
}

*/


// example in practicle  

class info {
private:

string name;
string city;
int age;

public: 

info(){
}


info(string name, string city, int age ) : name(name ), city(city), age(age ){
}


// getter 
 string getname(){
 return name;
}

string getcity(){
return city;
}

int getage(){
return age;
}

void setname(string name){
this->name=name;
}

void setcity(string city ){
this->city=city;
}

void setage(int age){
this->age=age;
}

void show(){
cout<<"Name "<<name<<endl;
cout<<"City "<<city<<endl;
cout<<"Age "<<age<<endl;
}

};

class derived : public info {
public:
derived(string name ,string city, int age) : info(name ,city,age){
}

void show(){
info :: show();
cout<<"Derived class : "<<endl;
}


};




int main(){

info  b("Haris","ISB ",23);
b.show();

cout<<endl;

derived d("Haris","ISB ",23);
d.show();

return 0;
}











