#include<iostream>
#include<string>
using namespace std;
/*
class cat {

private :
string name;
string fav_toy;


public:

// default constructer


// parameterized constructer 
cat(string name="ayzeen",string fav_toy="lazer"){
this->name=name;
this->fav_toy=fav_toy; 	
}

cat(string name="laii",string fav_toy="lazer"){
this->name=name;
this->fav_toy=fav_toy; 	
}


void display();

};

void cat :: display()  {
cout<<"Name :"<<name<<endl;
cout<<"Fav Toy: "<<fav_toy<<endl;
}


int main()
{
cat c1,c2;
cout<<"CAT 1 : "<<endl;

c1.display();
c2.display();

return 0;
}

*/

/*

class number {
private :
double num;

public:
 number(double num){
 *num=number;
 number=(double *) malloc(sizeof(double));
 cout<<"Constructer is creating :"<<endl;
  cout<<"Number is "<<*num<<endl;
}


~number(){
cout<<"Destroy "<<endl;
cout<<"Number is "<<*num<<endl;

}


};


int main (){


number x(7),v(3);
return 0;
}

*/

/*
class Num {
private:
int x;

public:

Num(){
}


Num(int x){
this->x=x;
*ptr=x;
x=(int *) malloc(sizeof(int));
cout<<"Constructer is creating :"<<endl;
cout<<"X :"<<*ptr<<endl;
}

~Num(){
cout<<"Constructer is creating :"<<endl;
cout<<"X :"<<*ptr<<endl;
free(ptr);
}


};


int main(){

Num x(2),v(4);


return 0;
}
*/


/*
class Num {

private:
double *number;

public:

Num(double num ){
number=(double *) malloc(sizeof(double));
*number=num;

cout<<"Constructer is executing :"<<endl;
cout<<"Number "<<*number<<endl;
}


~Num(){
cout<<"Constructer is executing :"<<endl;
cout<<"Number "<<*number<<endl;
free(number);
}


};


int main(){
Num x(3);

return 0;
}


*/
/*
class info {
private :
// dynamicllay allocation of constructer
string *name ;
int *age;

public:

info(string n,int a){
name=(string *) malloc(sizeof(string));
*name=n;


age=(int *) malloc(sizeof(int));
*age=a;


cout<<"Constructer is executive :"<<endl;
cout<<"Name :"<<*name<<endl;
cout<<"Age : "<<*age<<endl;
}


~info(){
cout<<"Destructer is executive :"<<endl;
cout<<"Name :"<<*name<<endl;
cout<<"Age : "<<*age<<endl;
free(name);
free(age);
}

};



int main(){
info x("haris",20),v("Ali",21);

return 0;
}


*/

/*

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

info(string name,string job,int age){
this->name=new string(name);
this->job=new string(job);
this->age=new int(age);

cout<<"Constructer is executed :"<<endl;
cout<<"Name :"<<*this->name<<endl;
cout<<"Job  : "<<*this->job<<endl;
cout<<"Age  : "<<*this->age<<endl;
}


// destructer 
info(){
cout<<"Destructer  is executed :"<<endl;
cout<<"Name :"<<*name<<endl;
cout<<"Job  : "<<*job<<endl;
cout<<"Age  : "<<*age<<endl;
delete name;
delete age;
delete job;
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

// settters 
void setname(string name){
*this->name=new string(name);
}


void setjob(string job){
*this->job=new string(job);
}

void setage(int age){
*this->age=new int(age);
}


void display(){
cout<<"Name : "<<*name<<endl;
cout<<"Job  : "<<*job<<endl;
cout<<"Age  : "<<*age<<endl;

};

int main(){

info x;

int age;
string name,job;


cout<<"Enter your name :"<<endl;
cin>>name;
x.setname(name);

cout<<"Enter you job :"<<endl;
cin>>job;
x.setjob(job);

cout<<"Enter your age :"<<endl;
cin>>age;
x.setage(age);

x.display();

return 0;
}

*/


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


// paramterized cosntructer 
info(string name, string job,int age ){
this->name=new string(name);
this->job=new string(job);
this->age=new int(age);

cout<<"Cosntructer is executive :" <<endl;
cout<<"Name :"<<*this->name<<endl;
cout<<"Job  : "<<*this->job<<endl;
cout<<"Age  : "<<*this->age<<endl;
}


// destructer
~info(){
cout<<"Cosntructer is executive :" <<endl;
cout<<"Name :"<<*name<<endl;
cout<<"Job  : "<<*job<<endl;
cout<<"Age  : "<<*age<<endl;
delete  name;
delete age ;
delete job;
}


// getters 

string  getname(){
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
cout<<"Name :"<<*name<<endl;
cout<<"Job  :"<<*job<<endl;
cout<<"Age  :"<<*age<<endl;
}

};


int main(){


info x;

int age;
string name,job;

cout<<"Enter your name :"<<endl;
cin>>name;
x.setname(name);

cout<<"Enter your job title :"<<endl;
cin>>job;
x.setjob(job);

cout<<"Enter the age :"<<endl;
cin>>age;
x.setage(age);

x.display();

return 0;
}


