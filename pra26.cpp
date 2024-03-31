#include<iostream>
#include<string>
using namespace std;

class info {
protected:
string *name;
string *post;


// constrcuter
info(){
name=new string;
post=new string;
}


~info(){
delete name;
delete post;
}


void display(){
cout<<"Name :"<<*name<<endl;
cout<<"Post :"<<*post<<endl;
}

};

class future : public info {
public:
int *age;

future(){
age=new int;
}

~future(){
delete age;
}

// getters
 string getname(){
return *name;
}

string getpost(){
return *post;
}

// stters 


int getage(){
return *age;
}

void setname(string name){
*this->name=string(name);
}

void setpost(string post){
*this->post=string(post);
}

void setage(int age){
*this->age=int(age);
}

void display(){
info :: display();
cout<<"Age :"<<*age<<endl;
}

};

int main(){

future p1;
p1.setname("Haris");
p1.setpost("CS");
p1.setage(20);
p1.display();


return 0;
}
