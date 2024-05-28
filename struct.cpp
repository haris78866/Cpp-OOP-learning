#include<iostream>
#include<string>
using namespace std;

/*
struct info {

string name;
string city ;
int age;


info(string name,string city,int age) : name(name) , city(city) , age(age){}

void print(string name,string city,int age);

};


void info ::  print(string name, string city,int age){
cout<<"Name : "<<name<<endl;
cout<<"City : " <<city<<endl;
cout<<"Age  : "<<age<<endl;
}

int main(){


info p1("Haris","ISB",20);

p1.print(p1.name,p1.city,p1.age);


return 0;
}





*/
// here am doing using array 

struct data {
string name[2];



data(string name) {
for(int i=0;i<2;i++){
name[i]=name[i];
}
}


void print(string name[2]){
cout<<"Student Name : "<<endl;
for(int i=0;i<2;i++){
cout<<"Name :"<<name[i]<<endl;
}
}
};


int main(){
data p;

string name;

for(int i=0;i<2;i++){
cout<<"Enter the name :"<<endl;
cin>>p.name[i];
}

void print();


return 0;
}

