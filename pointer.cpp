#include<iostream>
#include<string>
using namespace std;



int main(){

/*
int arr[4]={1,2,5,4};

int *ptr;
ptr=arr;

for(int i=0;i<4;i++){
  cout<<" Index  : "<<i<<" Address "<<*(ptr)<<endl;
  ptr++;
  }
  */
  
  
 // pointer to an array 
 
 
 int arr[5]={1,2,3,4,5};
 int (*ptr)[5];
 ptr=&arr;
 
 for(int i=0;i<5;i++){
  cout<<" Index  : "<<i<<" Address "<< *ptr+i<< " Content : "<<   *(*ptr+i)<<endl;
 // ptr++;
  }
  

return 0;
}

