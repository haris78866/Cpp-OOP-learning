#include<iostream>
#include<string>
using namespace std;

class car {
private:
string model;

public:

car (string m ) : model(m){}


// getters 
 string getmodel(){
 return model;
 }
 
 void setmodel(string model){
 this->model=model;
 }
 
 };
 
 class mechanic{
private:
string name;

public:
mechanic(string n ) : name(n) {
}

// getters 
string getname(){
return name;
}

 void setname(string name ){
this->name=name;
}
};

class garage{
private:
car *c ;
mechanic *m;
string g_n;
string g_l;

public:
garage(car *c_o , mechanic *m_o,string n, string l ) : c(c_o), m(m_o) , g_n(n) ,g_l(l){
}

string getg_n(){
return g_n;
}


string getg_l(){
return g_l;
}

void setg_n(string g_n){
this->g_n=g_n;
}


void setg_l(string g_l){
this->g_l=g_l;
}

void print(){
cout<<"Car model : "<<c->getmodel()<<endl;
cout<<"Mecahnic Name :"<<m->getname()<<endl;
cout<<"Garage Name "<<g_n<<endl;
cout<<"Garage location :"<<g_l<<endl;

}

};


 
int main(){



string model,name,gn,gl;


cout<<"Enter the model of your car :"<<endl;
cin>>model;
car c(model);

cout<<"Enter the mechanic name :"<<endl;
cin>>name;
mechanic m(name);

cout<<"Enter the garage name :"<<endl;
cin>>gn;


cout<<"Enter the garage location "<<endl;
cin>>gl;

garage g(&c,&m,gn,gl);


g.print();

return 0;
}
