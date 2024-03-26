#include<iostream>
#include<string>
using namespace std;

class fam {
public:
string name;
int age;
string post;

// default constructer
 fam(){
}

// paramerterized constucter
fam(string n, string p, int a) : name(n),post(p),age(a){
}

void display(){
cout<<"Name :"<<name<<endl;
cout<<"Post :"<<post<<endl;
cout<<"Age  :"<<age<<endl;
}

};


class boy   :  public  fam  {
public:
string education;


boy (string n, string p ,int a , string edu) : fam(n,p,a) ,education(edu){
}

void display(){
fam :: display();
cout<<"Education :"<<education<<endl;
}

};


class girl : public  boy {
public: 
string status;
int child;
 
girl(string n,string p,int a,string edu, string sta, int ch) :  boy(n,p,a,edu) , status(sta), child(ch) {
}

void display(){
boy :: display ();
cout<<"Status :"<<status<<endl;
cout<<"Child  :"<<child<<endl;
} 

};

int main(){

girl   g1("Haris","CS",20,"Undergraduate","Single",0);

g1.display();


return 0;
}
