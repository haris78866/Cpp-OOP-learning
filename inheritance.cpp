#include<iostream>
#include<string>
using namespace std;

class base {
protected:
string name;
int code;
public:

base(){
cout<<"Defauly is called :"<<endl;
}


base(string name,int code)  : name(name ) ,  code(code) {
cout<<"cnstructer  is called :"<<endl;
}

//getter



void setname(string name){
this->name=name;
}

void setcode(int code){
this->code=code;
}


void show(){
cout<<"Name : "<<name<<endl;
cout<<"Zip Code :"<<code<<endl;
}

};


class derived : public base {
private :
string car_name;

public :

derived(string name ,int code , string car) : base(name,code), car_name(car){
}


// getter 

string getcar_name(){
return car_name;
}

string getname(){
return name;
}

int getcode(){
return code;
}

// setters 

void setname(string car_name){
this->car_name=car_name;
}


void show(){
base :: show();
cout<<"Car :"<<car_name<<endl;
}
};



int main(){

base d("Haris",55651);

d.show();




return 0;
}
