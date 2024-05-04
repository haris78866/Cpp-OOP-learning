#include<iostream>
#include<string>
using namespace std;

class num{
private:
int x;
public:

num(int x) : x(x){
}

int getx(){
return x;
}

void setx(int x){
this->x=x;
}

void print(){
cout<<"Value of  x : "<<x<<endl;
}

num operator-(int  m){
int newX=x-m;
return num(newX);
}

};


int main(){

int m;
cout<<"Enter the value of m :"<<endl;
cin>>m;

num n1(10);
n1.print();

num result=n1-m;
result.print();




return 0;
}

