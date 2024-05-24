                                                   // arrays  
#include<iostream>
#include<string>
using namespace std;


int main(){
int arr[5];

cout<<"Enter the elements in the array :"<<endl;
for(int i=0;i<5;i++){
cin>>arr[i];
}


cout<<"Elements in the array :"<<endl;
for(int i=0;i<5;i++)
cout<<"Index "<<i+1<<" : "<<arr[i]<<endl;


return 0;
}
