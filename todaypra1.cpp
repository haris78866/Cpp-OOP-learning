#include<iostream>
#include<string>

using namespace std;

class stu {

private :
string name;
int age;
string edu;


public:

// default constructer 
stu(){
}

// parameterized constucter 
stu(int ag, string na, string ed){
name=na;
age=ag;
edu=ed;
}

// getter 

string getname(){
return name;
}

int getage(){
return age;
}

string getedu(){
return edu;
}

// setters 


void setname(string na){
name=na;
}

void setage(int ag){
age=ag;
}

void setedu(string ed){
edu=ed;
}



void display();

};


void stu :: display() {

cout<<"Naem  : "<<name<<endl;
cout<<"Age   : "<<age<<endl;
cout<<"Edu   : "<<edu<<endl;
}



int main()
{
stu s1;

int age;
string name,edu;

cout<<"Enter the name of student : "<<endl;
getline(cin,name);
//cin>>name;

s1.setname(name);



cout<<"Enter the age of student :"<<endl;
cin>>age;
s1.setage(age);


cout<<"Enter the education (Grade) of  student :"<<endl;
getline(cin,edu);
//cin>>edu;
s1.setedu(edu);


s1.display();

return 0;
}
