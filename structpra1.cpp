#include<iostream>
#include<string>

using namespace std;

struct stu{

string name;
int age;
int rollno;



void display();


};


void stu :: display(){

cout<<"Name : "<<name<<endl;
cout<<"Age  : "<<age<<endl;
cout<<"Roll no  : "<<rollno<<endl;
}


int main()
{

stu s1;

cout<<"Enter  your name : "<<endl;
cin>>s1.name;
cout<<"Enter your age :   "<<endl;
cin>>s1.age;
cout<<"Enter your Roll no "<<endl;
cin>>s1.rollno;


s1.display();

return 0;
}








