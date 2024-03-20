#include<iostream>
#include<string>
using namespace std;

class student {
public:
string name;
string grade;
int roll;
float cgpa;

// constucter

student(string n,string g,int r,float cg) : name(n),grade(g),roll(r),cgpa(cg) {
}

void display(){
cout<<"Name  :"<<name<<endl;
cout<<"Grade :"<<grade<<endl;
cout<<"Roll no :"<<roll<<endl;
cout<<"CGPA : "<<cgpa<<endl;
}

};


class BSc : public student {
private: 
string project;
string gradyear;

BSc (string n,string g , int r,float cg, string pro,string grad) : student(n,g,r,cg) , project(pro),gradyear(grad)
{}

void display(){
student :: display();
cout<<"Project : " <<project<<endl;
cout<<"Grad Year :"<<gradyear<<endl;
}
};



int main(){

BSc p("Haris","A+",0573,2.71,"Game","2027");
p.display();

return 0;
}
