#include<iostream>

using namespace std;

void cal(int *arr);

int main(){

int *arr;
arr=new int[4];


cal(arr);

delete[]  arr;

return 0;
}


void cal(int *arr){

cout<<"Enter element in the array :"<<endl;
for(int i=0;i<4;i++){
cin>>arr[i];
}


cout<<"Elements in the array :"<<endl;
for(int i=0;i<4;i++){
cout<<arr[i]<<" ";
}

}

