#include<iostream>
#include<string>
using namespace std;

// static binding that occur at  compile time 
// faster as compared dynamic bindign 
class class1 {


public:

class1(){
}

void show(){
cout<<"Class 1 : "<<endl;
}


};


class class2 : public class1 {
public:
void show(){
cout<<"Class 2 : "<<endl;
} 

};


int main(){

class1 c1;
c1.show();

class2 c2;
c2.show();



return 0;
}

