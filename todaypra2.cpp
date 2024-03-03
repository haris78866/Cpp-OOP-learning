#include<iostream>
#include<string>
using namespace std;

class employee
{
private :
string name;
string post;
int id;

public:
// default constructer

employee(){
}

// paramterized constructer
employee(string name ,string post, int id){
this->name=name;
this->post=post;
this->id=id;
}

// getters 

string getname(){
return name;
}

string getpost(){
return post;
}

int getid(){
return id;
}
// setters 

void setname(string  name){
this->name=name;
}

void setpost(string post){
this->post=post;
}


void setid(int id){
this->id=id;
}

void display();


};

void employee :: display(){

cout<<"Name : "<<name<<endl;
cout<<"Post : "<<post<<endl;
cout<<"ID   : "<<id<<endl;
}

int main()
{

int n;

string name,post;
int id;
cout<<"Enter the num of  employee : "<<endl;
cin>>n;

employee s[n];

for(int i=0;i<n;i++){

cout<<"Enter the name of employee :"<<endl;
cin>>name;

s[i].setname(name);

cout<<"Enter the post of employee :"<<endl;
cin>>post;
s[i].setpost(post);


cout<<"Enter the id of the employee :"<<endl;
cin>>id;
s[i].setid(id);

}



for(int i=0;i<n;i++){
cout<<"Employee :"<<i+1<<endl;
s[i].display();
}



return 0;
}
