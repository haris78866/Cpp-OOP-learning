                                             // subscript operator  is a special operator we can not do with friend function  [] {} ->
#include<iostream>
#include<string>
using namespace std;

class  quiz {
private:
int sub[4];
public:

quiz(int sub1,int sub2,int sub3,int  sub4){
sub[0]=sub1;
sub[1]=sub2;
sub[2]=sub3;
sub[3]=sub4;
}

int operator[](int index){
return sub[index];
}

};



int main(){

quiz haris(12,23,34,56);

cout<<"Quiz :"<<endl;
cout<<"Q1 :"<<haris[0]<<endl;
cout<<"Q2 :"<<haris[1]<<endl;
cout<<"Q3 :"<<haris[2]<<endl;
cout<<"Q4 :"<<haris[3]<<endl;



return 0;
}

