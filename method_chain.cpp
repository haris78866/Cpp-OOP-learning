#include<iostream>
#include<string>
using namespace std;



class Data {
private:
string name;
string city;
int age;


public:

Data(string name,string city,int age ) : name(name) , city(city) , age(age){
}

// default constructer 
Data() : name(""), city(""), age(0){
}

// getters 
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

Data & setname(string name){
this->name=name;
return *this;
}

Data & setcity(string city){
this->city=city;
return *this;
}


Data & setage(int age){
this->age=age;
return *this;
}


void show(){
cout<<"Name "<<name<<endl;
cout<<"City  "<<city<<endl;
cout<<"Age  "<<age<<endl;
}

};

int main(){




string name,city;
int age;

cout<<"Enter the name "<<endl;
cin>>name;

cout<<"Enter the City  "<<endl;
cin>>city;

cout<<"Enter the age "<<endl;
cin>>age;

Data p;
 p.setname(name).setcity(city).setage(age);
 p.show();




return 0;
}

