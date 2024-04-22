#include<iostream>
#include<string>
using namespace std;
//int cal(int *arr,int no);
/*

class info{
private:
string *name;
string *edu;
string *city;
public:

info(){
name=new string;
edu=new string;
city=new string;
}

info(string name,string edu,string city){
this->name=new string(name);
this->edu=new string(edu);
this->city=new string(city);
}

info(const  info & other){
name=new string(*other.name);
edu=new string(*other.edu);
city=new string(*other.city);
} 

~info(){
delete name;
delete edu;
delete city;
}

string getname(){
return *name;
}

string getedu(){
return *edu;
}

string getcity(){
return *city;
}

info & setname(string name){
*this->name=name;
return *this;
}

info & setedu(string edu){
*this->edu=edu;
return *this;
}

info & setcity(string city){
*this->city=city;
return *this;
}

void print();


};


void info :: print(){
cout<<"Name :"<<*name<<endl;
cout<<"Edu  :"<<*edu<<endl;
cout<<"City :"<<*city<<endl;
}


int main(){


info n;

string name,edu,city;

cout<<"Enter your name :"<<endl;
cin>>name;
n.setname(name);

cout<<"Enter your edu :"<<endl;
cin>>edu;
n.setedu(edu);

cout<<"Enter your city :"<<endl;
cin>>city;
n.setcity(city );

n.print();

info b;

b=n;

b.print();

return 0;
}
*/


// dynamically allocation for 1D array 


/*
int main(){

int *arr;
int no;

cout<<"Enter the no :"<<endl;
cin>>no;

arr=new int(no);
cal(arr,no);

delete[] arr;

return 0;
}



int cal(int *arr,int no){

 cout<<"Enter the values in the array :"<<endl;
 for(int i=0;i<no;i++){
 cin>>arr[i];
 }
 
 
 
 cout<<"Elmenets in the array :"<<endl;
 for(int i=0;i<no;i++){
cout<<arr[i]<<" ";
}


return 0;
}

*/


// dynamiaclly allocation of 2D array 

/*
int cal1(int **matrix1,int r1,int c1);
int cal2(int **matrix2,int r2,int c2);

int main(){

int **matrix1;
int **matrix2;

int r1,r2;
int c1,c2;


cout<<"Enter the no of row 1 :"<<endl;
cin>>r1;

cout<<"Enter the no of row 2 :"<<endl;
cin>>r2;

cout<<"Enter the no of coloumn 1 :"<<endl;
cin>>c1;

cout<<"Enter the no of column of 2 :"<<endl;
cin>>c2;

matrix1=new int*[r1];
matrix2=new int*[r2];

for(int i=0;i<r1;i++){
matrix1[i]=new int[c1];
matrix2[i]=new int[c2];
}


cal1(matrix1,r1,c1);
cal2(matrix2,r2,c2);

//deallocating the matrix1 & matrix2 
for(int i=0;i<r1;i++){
delete matrix1[i];
delete matrix2[i];
}
delete[] matrix1;
delete[] matrix2;

return 0;
}


int cal1(int **matrix1,int r1,int c1){


cout<<"Enter the elemnets in the matrix1 :"<<endl;
for(int i=0;i<r1;i++){
  for(int j=0;j<c1;j++){
   cin>>matrix1[i][j];
   }
}


cout<<"Elements in the matrix :"<<endl;
for(int i=0;i<r1;i++){
  for(int j=0;j<c1;j++){
cout<<matrix1[i][j]<<" ";
}
cout<<endl;
}
return 0;
}




int cal2(int **matrix2,int r2,int c2){


cout<<"Enter the elemnets in the matrix2 :"<<endl;
for(int i=0;i<r2;i++){
  for(int j=0;j<c2;j++){
   cin>>matrix2[i][j];
   }
}


cout<<"Elements in the matrix2 :"<<endl;
for(int i=0;i<r2;i++){
  for(int j=0;j<c2;j++){
cout<<matrix2[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
*/



                                                    // inheritance 
class person {
public:
string name;
string edu;

person(string n,string e) : name(n),edu(e){
}

string getname(){
return name;
}

string getedu(){
return edu;
}

// settters 
 void setname(string name){
this->name=name;
}


void setedu(string edu){
this->edu=edu;
}

void print(){
cout<<"Name :"<<name<<endl;
cout<<"Edu  :"<<edu<<endl;
}

};




class info  : public person {
public:
int age;
string city;

info(string n,string e, string c, int a) : person(n,e) , city(c) , age(a) {
}

// getters 
int getage(){
return age;
}

string getcity(){
return city;
}


void setage(int age){
this->age=age;
}

void setcity(string city){
this->city=city;
}

void print(){
person :: print();
cout<<"Age :"<<age<<endl;
cout<<"City :"<<city<<endl;
}

};


int main(){
info n("Haris","CS","ISB",19);

n.print();


return 0;
}








