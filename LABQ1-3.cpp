                                          // dynamically creating a class (taking variabe dyanmically)
#include<iostream>
#include<string>
using namespace std;



class info {
private:
// dynamically 
string *name;
string *city;
int    *age;

public:

// default constructer
info(){
name=new string;
city=new string;
age=new int ;
}

info(string name,string city,int age){
this->name=new string(name);
this->city=new string(city);
this->age=new int(age);
}


~info(){
delete name;
delete city;
delete age;
}

// getters 

string getname(){
return *name;
}

string getcity(){
return *city;
}

int getage(){
return *age;
}

// setters 
// here i am trying method chaining  by using setters (using return *this)

info & setname(string name){
*this->name=name;
return *this;
}

info & setcity(string city){
*this->city=city;
return *this;
}

info &setage(int age){
*this->age=age;
return *this;
}

void display();
};

void info :: display(){
cout<<"Name :"<<*name<<endl;
cout<<"City :"<<*city<<endl;
cout<<"Age  :"<<*age<<endl;
}

int main() {

info person1;
// taking from the user 
string name,city;
int age;
cout<<"Enter name"<<endl;
cin>>name;
cout<<"Enter city"<<endl;
cin>>city;
cout<<"Enter age"<<endl;
cin>>age;


cout<<"------PERSON : 1------"<<endl;
person1.setname(name).setcity(city).setage(age);

person1.display();

// now creating objeect 2
// deep copy 
info person2;
person2=person1;

cout<<"------PERSON : 2------"<<endl;
person2.display();

exit(0);
return 0;
}








