#include<iostream>
using namespace std;

class stu {

private:
int age;
int num;

public:
// default costructer 
stu(){
}

// paramterized constructer
stu(int n,int ag){
age=ag;
num=n;
}

// getter 
int  getnum(){
return num;
}

int  getage(){
return age;
}


// setter 

void setnum(int n){
 num=n;
 }

void setage(int ag){
age=ag;
}


void display(){
cout<<"The total num is : "<<num<<endl;
cout<<"The total age is : "<<age<<endl;
}

};

int main(){

stu r1;

int num,  age;

cout<<"Enter the num :"<<endl;
cin>>num;
r1.setnum(num);



cout<<"Enter the age :"<<endl;
cin>>age;
r1.setage(age);

r1.display();


 


return 0;
}
