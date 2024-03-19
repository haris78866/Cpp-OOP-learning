                                               //  OPERATER OVER LOADING    
#include<iostream>
#include<string>
using namespace std;
                                              // BY USING ADDITION 
/*
class num {
public:
int x;

num(int x){
this->x=x;
}

void display(){
cout<<"X : "<<x<<endl;
}

//SYNATX OF OPERATE OVERLOADING 
num operator+(const num &NumA){
return num(this->x+NumA.x);
}
};

int main(){

num a(3);
num b(4);

num c=a+b;


a.display();
b.display();
c.display();
return 0;
}
*/





                                         // BY USING ADDITION OF STRING 

/*

class num{
private:
string  x;
public:

num(string  x){
this->x=x;
}

void display(){
cout<<"X :"<<x<<endl;
}
    
// OPERATER OVERLOADING SYNTAX    
num operator+(const num & NumA){
return num(this->x+NumA.x);
}

};


int main(){
num a("Haris");
num b("Arain");
num c=a+b;

a.display();
b.display();
c.display();


return 0;
}

*/





                          // USING BOOL OPERATER IN OPERTOR OVERLOADING
class num {
public:
int x;

num(int x){
this->x=x;
}

void display(){
cout<<"X : "<<x<<endl;
}

//SYNATX OF OPERATER OVERLOADING 
num operator+(const num &NumA){
return num(this->x+NumA.x);
}

bool operator==(const num &NumA){
if(this->x==NumA.x) return true ;
else  return  false;
}

};

int main(){

num a(3);
num b(4);

num c=a+b;


a.display();
b.display();
c.display();

if(a==c){
  cout<<"a==c"<<endl;
 }
else {
  cout<<"a!=c"<<endl;
   }
return 0;
}

