#include<iostream>
#include<string>
using namespace std;

class info {

private:
string name;
string city;
int age;

public:
// member initializer list 
info(string name,string city,int age) :name(name),city(city),age(age){
}

void display(){
cout<<"Name :"<<name<<endl;
cout<<"City :"<<city<<endl;
cout<<"Age  :"<<age<<endl;
}

};

int main(){

info p("Haris","ISB",20);

p.display();
return 0;
}

