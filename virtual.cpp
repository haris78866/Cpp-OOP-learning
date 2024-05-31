#include<iostream>
#include<string>
using namespace std;


class A {

public:

A(){
}

void show(){
cout<<"Class A "<<endl;
}


};


class B :  public   virtual  A {
public: 

B(){
}

void show(){
A :: show();
cout<<"Class B "<<endl;
}

};


class C  : public virtual A {

public: 

C(){
}


void show(){
A  :: show();
cout<<"Class C "<<endl;
}

};


class D : public B , public C {
public: 

D(){
}

void show(){
B :: show();
cout<<"Class D "<<endl;
}

};




int main(){


D d;



d.show();

return 0;
}

