#include<iostream>
#include<string>
using namespace std;
void cal(int *arr1,int n);
int main(){
int n;
cout<<"Enter the size of an array :"<<endl;
cin>>n;


int *arr;
arr=new int[n];


cout<<"Enter the elments in the array :"<<endl;
for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 
cout<<"Elements in the array :"<<endl;
 for(int i=0;i<n;i++){
 cout<<arr[i]<<" "<<endl;
 }
delete[] arr;

// statically alloacted 
int *arr1;
cal(arr1,n);
delete [] arr1;
return 0;
}



void cal(int *arr1,int n){
// dynamically alloacted arr1
arr1=new int[n];


cout<<"Enter the elements in the arr 2 :"<<endl;
for(int i=0;i<n;i++){
cin>>arr1[i];
}


cout<<"Elements in the arr 2 :"<<endl;
for(int i=0;i<n;i++){
cout<<arr1[i]<<" "<<endl;



}

}
















