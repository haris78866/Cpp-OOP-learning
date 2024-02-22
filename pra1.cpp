#include<iostream>

using namespace std;


int main(){


int  n; 

cout<<"Enter the  num of rows :"<<endl;
cin>>n;

int *col;
col=new int[n];

cout<<"Enter the num of coloumn for each row :"<<endl;
for(int i=0;i<n;i++){
cin>>col[i];
}

int **arr;
arr=new int *[n];

for(int i=0;i<n;i++){
arr[i]=new int[col[i]];
}


cout<<"Taking value for each row :"<<endl;
for(int i=0;i<n;i++){
 for(int j=0;j<col[i];j++){
   cout<<"Enter value for row :"<<i+1<<endl;
   cin>>arr[i][j];
   }
   }
   
cout<<"Display values :"<<endl;
for(int i=0;i<n;i++){
  for(int j=0;j<col[i];j++){
   cout<<arr[i][j]<<" ";
   }
   cout<<endl;
   } 


return 0;
}
