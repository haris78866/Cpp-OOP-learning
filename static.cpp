#include<iostream>
#include<string>
using namespace std;


class info {
private:
string *name;
string *job;
int *age;

public:
// default constructer 
info(){
name=new string;
job=new string;
age=new int;
}

// parameterized constructer 
info(string name, string job, int age){
this->name=new string(name);
this->job=new string(job);
this->age=new int(age);

cout<<"Constructer is executive :"<<endl;
cout<<"Name :  "<<*this->name<<endl;
cout<<"Job  :  "<<*this->job<<endl;
cout<<"Age  :  "<<*this->age<<endl;
}

// destructer 

~info(){
cout<<"Destructer is executive :"<<endl;
cout<<"Name :  "<<*name<<endl;
cout<<"Job  :  "<<*job<<endl;
cout<<"Age  :  "<<*age<<endl;
delete name;
delete job;
delete age;
}

// getters 

string getname(){
return *name;
}

string getjob(){
return *job;
}

int getage(){
return *age;
}


// setters 


void setname(string name){
*this->name=name;
}


void setjob(string job){
*this->job=job;
}


void setage(int age){
*this->age=age;
}


void display(){
cout<<"Information :"<<endl;
cout<<"Name :  "<<*name<<endl;
cout<<"Job  :  "<<*job<<endl;
cout<<"Age  :  "<<*age<<endl;
}

};



int main(){

int no;
cout<<"Enter the total person :"<<endl;
cin>>no;

info p[no];


string name,job;
int age;

for(int i=0;i<no;i++){
cout<<"Enter the name : "<<i+1<<endl;
cin>>name;
p[i].setname(name);

cout<<"Enter the Job title : "<<i+1<<endl;
cin>>job;
p[i].setjob(job);

cout<<"Enter your age  : "<<i+1<<endl;
cin>>age;
p[i].setage(age);
}

for(int i=0;i<no;i++){
p[i].display();
}

return 0;
}
