#include<iostream>
#include<string>

using namespace std;


struct info{
string name;
int age;

};

void display(string name,int age){
cout<<"Name : "<<name<<endl;
cout<<"Age  : "<<age<<endl;
}


int main()
{

struct info n1;

cout<<"Enter your name : "<<endl;
cin>>n1.name;

cout<<"Enter your age : "<<endl;
cin>>age;


display(n1.name,n1.age);

return 0;
}


