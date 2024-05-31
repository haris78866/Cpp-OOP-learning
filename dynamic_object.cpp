#include<iostream>
#include<string>
using namespace std ;

class Data {
private:
string *emp_name;
int *age;
int size;
public :

Data() : emp_name(nullptr) , age(nullptr)  ,size(0){
}

Data(int size ): size(size){
emp_name=new string[size];
age=new int [size];
}

~Data(){
delete [] emp_name;
delete [] age;
}

// getters

string getemp_name(int index){
return emp_name[index];
}


int getage(int index){
return age[index];
}

int getsize(){
return size;
}

// setters 

void setemp_name(int index, const string & emp_name){
this->emp_name[index]=index;
}

void setage(int index, const int & age){
this->age[index]=age;
}

void setsize(int size){
this->size=size;
}


void tak(){
cout<<"Enter DATA :"<<endl;
for(int i=0;i<size;i++){
cout<<"Enter the Employee name :"<<endl;
cin>>emp_name[i];
cout<<"Enter the age :"<<endl;
cin>>age[i];
}
}

void show(){
cout<<"Employee Data :"<<endl;
for(int i=0;i<size;i++){
cout<<"Name :"<<emp_name[i]<<endl;
cout<<"Age :"<<age[i]<<endl;
}
} 


};


int main(){

int size;
cout<<"Enter the size how many Employee you wanna add :"<<endl;
cin>>size;


Data *person=new  Data(size);




person-> tak();
person-> show();


delete  person;


}
