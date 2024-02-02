#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main ()  {

// in string it wil combine by ising + sign 
// like to add something   as i used my name & year as an example

string name="haris";
string last=" shahzad";

cout<<"Name : "<<name+last<<endl;

string year1="20";
string year2="24";

cout<<"Year : "<<year1+ year2<<endl;

// append fun is much faster than the plus sign 
cout<<"Name :"<<name.append(last)<<endl;

// dot is used is used t acess the instant fun  (for acessing a memeber fun of the class in the structure)

cout<<"Lenght : "<<name.length()<<endl;
cout<<"Lenght : "<<name.size()<<endl;
// size or lenght count the variable not index 
// size fun used for somethung fixed but lenght fun used for something variable

//acessibf the variable  using .at()  fun or using index name[1]
cout<<"Acessing  : "<<name.at(3)<<endl;
cout<<"Lenght : "<<name[3]<<endl;

//getline(cin,name)
string fullname;
//cin>>fullname;
// cin is the object of the iostream 
getline(cin,fullname);
cout<<"Name :"<<fullname<<endl;





// its applicable for only int & for only 2 parameters 
cout<<"the max value is  :"<<max(22,33)<<endl;
cout<<"the max value is  :"<<min(22,33)<<endl;

//round fun to round off the value   take only one parameter
cout<<"the max value is  :"<<round(22.3)<<endl;


//enhance the array 
int arr[]={1,2,2,4,5,6,7};

for (int a:arr) {
 cout<<a<<endl;
 }





return 0;
}

