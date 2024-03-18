#include<iostream>
#include<string>
using namespace std;

class info {
private:
string *name;
string *city;
int *age;
public:

// defalult destructer
info(){
name=new string;
city=new string;
age=new int;
}

// paramterized consrtuceter
info(string name,string city,int age){
this->name=new string(name);
this->city=new string(city);
this->age=new int(age);


cout<<"Constructer is eexecutive :"<<endl;
}

~info(){
cout<<"Destructer is executive :"<<endl;
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
void setname(string name){
*this->name=name;
}

void setcity(string city){
*this->city=city;
}

void setage(int age){
*this->age=age;
}

void display(){
cout<<"Name :"<<*name<<endl;
cout<<"City :"<<*city<<endl;
cout<<"Age:  "<<*age<<endl;
}

};

int main(){


int no;

cout<<"Enter the no of person :"<<endl;
cin>>no;

info obj1[no];

string name,city;
int age;

for(int i=0;i<no;i++){
cout<<"Enter your name :"<<endl;
cin>>name;
obj1[i].setname(name);

cout<<"Enter your city :"<<endl;
cin>>city;
obj1[i].setcity(city);

cout<<"Enter your age :"<<endl;
cin>>age;
obj1[i].setage(age);
}


for(int i=0;i<no;i++){
cout<<"Data of Object 1"<<endl;
obj1[i].display();
}
// here am making another object 


// now making its shallow copy 

info obj2[no];
for(int i=0;i<no;i++){
obj2[i]=obj1[i];
}

for(int i=0;i<no;i++){
cout<<"Data of object 2 : "<<endl;
obj2[i].display();
}

return 0;
}















