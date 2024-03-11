#include<iostream>
#include<string>
using namespace std;


class person {

private:
string name;
int age;
string job;

public :
// default constructer
person(){
}

// parameterized constructer
person(string name, string job,int age){
this->name=name;
this->job=job;
this->age=age;
}

// getters 

string getname(){
return name;
}

int getage(){
return age;
}

string getjob(){
return job;
}



// setters 
void setname(string name){
this->name=name;
}


void setage(int age){
this->age=age;
}

void setjob(string){
this->job=job;
}

void display();
};


void person :: display(){
cout<<"Name : "<<name<<endl;
cout<<"Age  : "<<age<<endl;
cout<<"Job  : "<<job<<endl;
}



int main(){

int no;
cout<<"Enter  the number in your person :"<<endl;
cin>>no;

person p[no];

string name;
string job;
int age;


cout<<"Enter the data : "<<endl;
for(int i=0;i<no;i++){
  cout<<"Enter Name : "<<i+1<<endl;
  cin>>name;
  p[i].setname(name);
  cout<<"Enter Age : "<<i+1<<endl;
  cin>>age;
  p[i].setage(age);
  cout<<"Enter Job : "<<i+1<<endl;
  cin>>job;
  p[i].setjob(job);
  }


for(int i=0;i<no;i++){
  p[i].display();
  }


return 0;
}






