#include<iostream>
#include<cstdlib>
#include<ctime>
using  namespace std;
// function prototypes 
void Resize(int *arr,int size);
void Add_new_num(int *arr,int size,int newNum);
void Print_array(int *arr,int size);
void Sum_of_array(int *arr,int size);
void Delete_num(int *&arr,int &size,int numDelete);
// am writing on the behla of my previous knowledge 

int main(){
int choice;
int size=5;
int *arr;            
arr= new int[size];              // dynamically allocated


for(int i=0;i<size;i++){
 arr[i]=rand()%11;             // randomaly generted num in the array from 0 to 10
 }




do {

//choice for the user
cout<<"-------MENU-------"<<endl;
cout<<"1) Add a new num   "<<endl;
cout<<"2) Delete a number "<<endl;
cout<<"3) Print the Array "<<endl;
cout<<"4) Sum of Array    "<<endl;
cout<<"0) Exit            "<<endl;

cout<<"Enter your choice :"<<endl;
cin>>choice;

switch(choice){
// different case  as according to the user choice 
case 1:
       int newNum;
       cout<<"Enter the new number :"<<endl;
       cin>>newNum;
       Add_new_num(arr,size,newNum);
break;

case 2:
      int numDelete;
      cout<<"Enter a num to delete :"<<endl;
      cin>>numDelete;
      Delete_num(arr,size,numDelete);
      
break;

case 3:
       Print_array(arr,size);
break;

case 4:
      Sum_of_array(arr,size);
break;


default: 
     cout<<"invlid choice!! :"<<endl;
 
 }
}while(choice!=0);

delete[] arr;                       // deallocating the arr 
return 0;
}

// funtion for resizeing the array 
void Resize(int *arr,int size){
int newSize=size+1;
int *newArray;
newArray=new int[newSize];

for(int i=0;i<size;i++){
newArray[i]=arr[i];
}

delete[] newArray;       // deallocating 
}

// funtion for addd a new number in the array
void Add_new_num(int *arr,int size,int newNum){
Resize(arr,size);
arr[size- 1]=newNum;
cout<<"New number  : "<<newNum<<" is sucessfully added "<<endl;
}


// function for delete a number
void Delete_num(int *&arr,int &size,int numDelete)
{
int foundnumber=-1;
for(int i=-1;i<size;i++){
  if(arr[i]==numDelete){
    foundnumber=i;
    break;
    }
} 
  int newSize=size-1;
int *newArray;
newArray=new int[newSize];

for(int i=0;i<size;i++){
if(foundnumber!=-1){
    newArray[i]=arr[i+1];
    continue;
    }
 else if(i>foundnumber){
   newArray[i]=arr[i+1];
 }
else {
 newArray[i]=arr[i];
}
}

delete[] arr;
arr=newArray;
size--;
}


// function for print the array
void Print_array(int *arr,int size){
cout<<"Elements in Array :"<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" "<<endl;
}
}


// function for print sun of the array 
void Sum_of_array(int *arr,int size){
int sum=0;

for(int i=0;i<size;i++){
sum+=arr[i];
}
cout<<"Sum of array :"<<sum<<endl;
}




