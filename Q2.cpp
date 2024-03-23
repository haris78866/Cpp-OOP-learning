#include<iostream>
#include<string>
using namespace std;

// taken the class member dynamically 
class angle {
private:
float *minutes;
char *direction;
int *degree;
public:



// default constructer 
angle(){
minutes=new float;
direction=new char;
degree=new int ;
}


// paramertized constructer 
angle(float minutes,char direction,int degree){
this->minutes=new float(minutes);
this->direction=new char(direction);
this->degree=new int(degree);
}

// destructer 
~angle(){
delete minutes;
delete degree;
delete direction;
}
// getter 
float getminutes(){
return *minutes;
}

char getdirection(){
return *direction;
}

int getdegree(){
return *degree;
}


// setters 

void setminutes(float minutes){
*this->minutes=minutes;
}

void setdirection(char direction){
*this->direction=direction;
}

void setdegree(int degree){
*this->degree=degree;
}

// copy constructer
angle(const angle &other){
minutes=new float(*(other.minutes));
direction=new char(*(other.direction));
degree=new int(*(other.degree));
}

// display fun 
void display();

};

// outside the class 
void angle :: display(){
cout<<"         ------------ANGLE-----------"<<endl;
cout<<"Deg\xF8:Min:Dir: "<<*degree<<" "<<" "<<*minutes<<" "<<*direction<<endl;
}

int main(){
// taking dynamically 
angle *anglePtr=new angle();
int degree;
float minutes;
char direction;
char choice;

do{
cout<<"Enter the Degree :"<<endl;
cin>>degree;
anglePtr->setdegree(degree);

cout<<"Enter the minutes :"<<endl;
cin>>minutes;
anglePtr->setminutes(minutes);
cout<<"Enter the direction (N,E,W,S)"<<endl;
cin>>direction;
anglePtr->setdirection(direction);

anglePtr->display();

cout<<"Do you want enter another angle :"<<endl;
cin>>choice;

}while(choice=='Y' || choice =='y');


delete anglePtr;




return 0;
}
