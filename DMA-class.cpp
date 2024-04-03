#include<iostream>
#include<string>
using namespace std;

class info {
private:
string  *name;
string *edu;
int *age;
public: 
// default constructer 
info(){
name=new string;
edu=new string;
age=new int;
}

// parameteized constructer 
info(string name,string edu, int age){
this->name=new string(name);
this->edu=new string(edu);
this->age=new int(age);
}

// destructer 
~info(){
delete name;
delete edu;
delete age;
}



// copy constructer 
info(const info & other){
name=new string(*other.name);
edu=new string(*other.edu);
age=new int(*other.age);
}



void display();
};



void info :: display(){
cout<<"Name : "<<*name<<endl;
cout<<"Edu  : "<<*edu<<endl;
cout<<"Age  : "<<*age<<endl;
}



int main(){



string name,edu;
int age;

cout<<"Enter the name :"<<endl;
cin>>name;

cout<<"Enter the edu :"<<endl;
cin>>edu;

cout<<"Enter  your age :"<<endl;
cin>>age;

// here am  making my object 
info *p1;
p1 =new info(name,edu,age);

p1->display();


info *p2;
p2=new info(*p1);

p2->display();





delete p1;
delete p2;
return 0;
}

