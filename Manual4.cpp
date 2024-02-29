                               // 
                               
#include<iostream>

using namespace std;

/*
class Rectangle {

int length ;
int width;


public :
// default constructer 
 Rectangle () {
  length=0;
  width=0;
}

Rectangle (int l, int w ){
length=l;
width=w;
}


// getters 

int getlength(){
return length;
}

int getwidth(){
return width;
}


};   
int main()
{
Rectangle r1(10,20);         //calling the parameterized constricter  

cout<<"length of the rextangle is :"<<r1.getlength()<<endl;
cout<<"width of the rextangle is :"<<r1.getwidth()<<endl;

return 0;
}                               

*/



// destroy the objects usning destructers 
// we can make only one  destructer for one object 

/*
class test {
public :

test(){
cout<<"contructer is calling "<<enld;
}

~test(){
cout<<"destructer is  calling "<<endl;
}
};


int main(){

test t1;

return 0;
}

*/


//  array of object 

class student {

// data members
private  :
int marks;
string stuName;
float gpa;

public :
// dafault constructer 
student(){

}
// parameterized constructer 

student (int marks,string stuName ,float gpa){
// to avoid compiler codfusion we use (this) keyword   with member access operater
this->marks=marks;
this->stuName=stuName;
this->gpa=gpa;
}

// getter

int getmarks()
{
return marks;
}

string getstuName()
{
return stuName;
}

float gpa(){

return gpa;
}

// setters 

void setmarks(int marks)
{
this->marks=marks;
}


void setstuName(string stuName){
this->stuName=stuName;
}

void setgpa( float gpa){
this->gpa=gpa;
}

};  

// passin object to array function 
void display (student s[])
{
for(int i=0;i<3;i++){
cout<<"Name :"<<endl;
cout<<s[i].getstuName<<endl;
cout<<"Marks :"<<endl;
cout<<s[i].getmarks<<endl;
cout<<"GPA:"<<endl;
cout<<s[i].getgpa<<endl;
}



int main(){

student s[3];
int marks;
string name;
float gpa;

for(int i=0;i<3;i++){
cout<<"Enter your name :"<<endl;
cin>>name;
s[i].setstuName(name);
cout<<"Enter your marks :"<<endl;
cin>>marks;
s[i].setmarks(marks);
cout<<"Enter your gpa :"<<endl;
cin>>name;
s[i].setgpa(gpa);
}




display(s);
return 0;
} 












