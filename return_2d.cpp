#include<iostream>
using namespace std;


int **create();

int main(){
int **arr;
arr=create();

cout<<"Elemets int the matrix :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
   cout<<arr[i][j]<<" ";
   }
cout<<endl;
}



for(int i=0;i<2;i++){
delete[] arr[i];
}
delete[] arr;


return 0;
}


int **create(){

int **arr;
arr=new int *[2];

for(int i=0;i<2;i++){
  arr[i]=new int[2];
  }

cout<<"Enter elemets in the array :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
  cin>>arr[i][j];
  }
}


return arr;
}




