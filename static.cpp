#include<iostream>
#include<string>
using namespace std;


 // instance variable  (that uses operater with the class) 
 /*
class  animal {

public: 
string species;

// constructer
animal (string species){
this->species=species;
}

};

int main(){

animal *lion=new animal("sherry");
animal *tiger=new animal("tarzon");


cout<<"lion  : "<<lion->species<<endl;
cout<<"Tiger : "<<tiger->species<<endl;

return 0;
}

*/

// The concept of static variable 

/*
class  animal {

public: 
string species;
static  int total;

const string planet ="Earth";

// constructer
animal (string species){
this->species=species;
total++;
}


~animal(){
total--;
}

};

// we can not use this  inside the class (give an error)   
// if we use const variable instead  static then we can use inside the class 
int animal :: total=0;

int main(){

animal *lion=new animal("sherry");
animal *tiger=new animal("tarzon");


cout<<"lion  : "<<lion->species<<endl;
cout<<"Tiger : "<<tiger->species<<endl;
cout<<"Total : "<<animal :: total<<endl;

delete lion;
delete tiger;

cout<<"Total : "<<animal :: total<<endl;


return 0;
}

*/


// static member function  




class info {

private:
int length;
static int total;

public:

// constructer
info (int length){
this->length=length;
total++;
}

~info(){
cout<<"Destructer is exceuting : "<<endl;
total--;
}

int area(){
return length*length;
}

int width(){
return length+length;
}


static int get_total(){
return total;
}

};

int info :: total =0;

int main(){
// square 1
info square1(5);

cout<<"Area  : "<<square1.area()<<endl;
cout<<"Width : "<<square1.width()<<endl;


// we have to ways to call static member fun 
cout<<"Total squares : "<<square1.get_total()<<endl;
cout<<"Total squares : "<<info :: get_total()<<endl;

// now for square 2 
info square2(10);

cout<<"Area  : "<<square2.area()<<endl;
cout<<"Width : "<<square2.width()<<endl;


// we have to ways to call static member fun 
cout<<"Total squares : "<<square2.get_total()<<endl;
cout<<"Total squares : "<<info :: get_total()<<endl;



return 0;
}



















