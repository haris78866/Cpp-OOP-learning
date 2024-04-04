                                               // DYNAMICALLY ALLOCATION OF 1D ARRAY 
#include<iostream>
#include<string>
using namespace std;
// function prototypes
void taking_value(int *arr, int no); 

int main(){

// creating dynamically for 1D-ARRAY

int no;
cout<<"Enter the no of rows :"<<endl;
cin>>no;

int *arr;           // statically allocated
arr=new int(no);   // dynamically allocated 

taking_value(arr,no);

delete[] arr;        // deallocation of arr

return 0;
}


void taking_value(int *arr, int no){

cout<<"Enter elements in the array :"<<endl;
for(int i=0;i<no;i++){
cin>>arr[i];
}


cout<<"Elemets in the array :"<<endl;
for(int i=0;i<no;i++){
cout<<"Index "<<i+1<<" : "<<arr[i]<<" "<<endl;
}
..



