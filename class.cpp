#include<iostream>
#include<string>
using namespace std;


class info {
private:
string name;
string city;
int age;

public:


info(string name, string city, int age){
this->name=name;
this->city=city;
this->age=age;
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


// setters 

void setname(string name ){
this->name=name;
}

void setcity(string city){
this->city=city;
}

void setage(int age){
this->age=age;
}

void display();

};


void info :: display(){
cout<<"Name : "<<name<<endl;
cout<<"City : "<<city<<endl;
cout<<"Age  : "<<age<<endl;
}





int main(){

string name,city;
int age;


cin>>name;
cin>>city;
cin>>age;

info p1(name,city,age);

p1.display();

return 0;
}

