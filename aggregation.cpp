#include<iostream>
#include<string>
using namespace std;

class student {
private:
string name;
int age;
public:

student(string name ,int age) : name(name) , age(age){
}


// getters 

string getname(){
return name;
}

int getage(){
return age;
}

void setname(string name){
this->name=name;
}

void setage(int age ){
this->age=age;
}


};


class teacher {
private:
string tec_name;
string course;
public:

teacher(string name,string course ) : tec_name(name) , course(course) {
}


// getters 

string gettec_name(){
return tec_name;
}

string getcourse(){
return course;
}

  // setters 
 void settec_name(string tec_name){
this->tec_name=tec_name;
}

void setcourse(string course){
this->course=course;
}

};


class uni {
private:
string uni_loc;
string uni_name;

student *s;
teacher *t;

public:

uni(string uni_loc, string uni_name, student *s, teacher *t) : uni_loc(uni_loc) , uni_name(uni_name) , s(s) , t(t){
}

// getters 

string getuni_loc(){
return uni_loc;
}


string getuni_name(){
return uni_name;
}

void setuni_loc(string uni_loc){
this->uni_loc=uni_loc;
}

void setuni_name(string uni_name){
this->uni_name=uni_name;
}


void show(){
cout<<"Student Name "<<s->getname()<<endl;
cout<<"Student Age "<<s->getage()<<endl;
cout<<"Techer name "<<t->gettec_name()<<endl;
cout<<"Course "<<t->getcourse()<<endl;
cout<<"Uni loc "<<uni_loc<<endl;
cout<<"Uni Name "<<uni_name<<endl;
}

};







int main(){

student s("Haris",19);

teacher t("Bilal ", "OOP");

uni u("PWR","FAST",&s,&t);
u.show();

return 0;
}

