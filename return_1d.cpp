#include<iostream>
using namespace std;

int *result();
int main(){

int *arr;
arr=result();

cout<<"Elements in the array :"<<endl;
for(int i=0;i<4;i++){
     cout<<arr[i]<<endl;
     }


delete[] arr;
return 0;
}


int *result(){


int *arr=new int[4];


cout<<"Enter elemets in the array :"<<endl;
for(int i=0;i<4;i++){
   cin>>arr[i];
   }
   
   

return arr;
}




