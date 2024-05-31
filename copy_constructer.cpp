#include<iostream>
#include<string>
using namespace std;

                                              // default copy constructer 
/*
class my {
private:
string car_name;

public:

my(){
}


my(string name) : car_name(name){
}

void show(){
cout<<"Car Name : "<<car_name<<endl;
}


};




int main(){

my c1("Audi Love ");

my c2=c1;

c1.show();
c2.show();

return 0;
}

*/


                          // non defalt copy constructer 
                          
class my {
private:
int len;
int wid;

public: 

my(){
}


my(int len,int wid) : len(len),wid(wid){
}

my(const my & obj){
len=obj.len;
wid=obj.wid;
}

void show(){
cout<<"Lenght : "<<len<<endl;
cout<<"Width :"<<wid<<endl;
}

};


int main(){

my r1(10,10);
my r2=r1;


r1.show();



return 0;
}

