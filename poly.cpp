#include<iostream>
#include<string>
using namespace std;

class parent{
public:
virtual void show(){
}


// virtual void show()=0  also known as abstract function  it means we dont have  any defination 



};

class child : public parent {
public: 

virtual void show(){
cout<<"Child  function :"<<endl;
}


};

int main(){

parent *ptr;
child c;

ptr=&c;
ptr->show();


return 0;
}

