#include<iostream>
#include<string>
using  namespace std;


class stu {
private:
string name;
string city;
int age;

public:

// default constructer 
stu(){
}



// parameterized constructer 
stu(string name, string city ,int  age ){
this->name=name;
this->city=city;
this->age=age;
}



void print(){
cout<<"Name : "<<name<<endl;
cout<<"City :"<<city<<endl;
cout<<"Age :"<<age<<endl;
}

};



int main(){
stu s1("Haris","ISB",20);

s1.print();



return 0;
}
