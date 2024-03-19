#include<iostream>
#include<string>
using namespace std;

class info {
private:
string name;
string city;
int age;
public:

info(){
}

info(string name,string city,int age){
this->name=name;
this->city=city;
this->age=age;
}

// getters 

string getname(){
return name;
}

string getcity(){
return city;
}

int getage(){
return age;
}

// setters 

info& setname(string  name){
this->name=name;
return *this;
}

info& setcity(string city){
this->city=city;
return *this;
}

info& setage(int age){
this->age=age;
return *this;
}

void display();
};

void info :: display(){
cout<<"Name "<<name<<endl;
cout<<"City  "<<city<<endl;
cout<<"Age  "<<age<<endl;
}


int main(){

info p;

string name,city;
int age;

cout<<"Enter your name "<<endl;
cin>>name;

cout<<"Enter your city "<<endl;
cin>>city;

cout<<"Enter your age "<<endl;
cin>>age;

// method chaining 
p.setname(name).setcity(city).setage(age);

p.display();

return 0;
}

*/
  
  
  
  
  
                                             // TRYING TO DO DYNAMICALLY 

class info {
private :
string *name;
string *post;
int *age;
public: 



info(string name,string post,int age) :  name(new string(name)) ,post(new string(post)),age(new int(age)) {

}

~info(){
delete name;
delete post;
delete age;
}

// getters 

string getname(){
return *name;
}

string getpost(){
return *post;
}

int getage(){
return *age;
}

// setters

info& setname(string name){
*this->name=name;
return *this;
}

info&  setpost(string post){
*this->post=post;
return *this;
}

info& setage(int age){
*this->age=age;
return *this;
}

void display();
};

void info :: display() {
cout<<"Name "<<*name<<endl;
cout<<"Post "<<*post<<endl;
cout<<"Age "<<*age<<endl;
}


int main(){



string name,post;
int age;

cout<<"Enter your name"<<endl;
cin>>name;

cout<<"Enter your post "<<endl;
cin>>post;

cout<<"Enter your age"<<endl;
cin>>age;

info p(name,post,age);
p.display();

return 0;
}


