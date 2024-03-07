                             //static variable   & static memeber function 
                //it uses with variable and memeber function 
                // benefits : we can create without crestting an objetct of a  class  
                // memory efficient 
              // by using this we dont need to initailize an value for each object
              // enum used for constnat      like mondsy, tuesday, wednesday, etc 
              
#include<iostream>
#include<string>
using namespace std;
/*
class account {

public :
int accno;
string name;
// static datd member 
static float rateofinterest;

account(int accno, string name ){
this->accno=accno;
this->name=name;
}

void display(){
cout<<accno<<"   "<<name<<"  "<<rateofinterest<<endl;

}
};
//  intialization of static data memeber
float account ::  rateofinterest=6.5;


int main(){

account a1(112,"Haris");
account a2(113,"Arain");

a1.display();
a2.display();


return 0;
}  

*/
                                     // about counter   (to count the object )
/*
class count {
public : 
static int counter;


count (){
counter++;
}


int getcounter(){
   return counter;
   }

};

int count ::  counter=0;

int main(){

count c1,c2,c3,c4;

cout<<"The total obeject are :"<<c1.getcounter()<<endl;
}


*/


/*

class   account {
public :

int accno;
string name;
static int count;

account(int accno, string name ){
this->accno=accno;
this->name=name;
}

// by using static we can use wihtout obejct in the main
static int getcount(){
 return count ;
 }
 
 
 void display(){
  cout<<accno<<"   "<<name<<endl;
 }
 
 
};

int account :: count=0;

int main (){

account a1(112,"Haris");
account a2(113,"Arain");


a1.display();
a2.display();

cout<<"Total count : "<<account :: count;


return 0;
} 


*/


