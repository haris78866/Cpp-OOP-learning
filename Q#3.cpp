#include<iostream>

using namespace std;


int main()
{
int n;
cout<<"Enter the num of rows :"<<endl;
cin>>n;


int *col;
col=new int[n];

cout<<"Enter the number  of coloumn for each  rows : "<<endl;
for(int i=0;i<n;i++){
cout<<"For row :"<<i+1<<endl;
 cin>>col[i];
}


double **arr;
arr=new double*[n];

for(int i=0;i<n;i++){                        // dynamically alloaction of 2D array 
   arr[i]=new  double[col[i]];
}  
   
   
   
cout<<"Enter the value for each row :"<<endl;             // taking values in each row 
for(int i=0;i<n;i++){
  for(int j=0;j<col[i];j++){
    cout<<"Row : "<<i+1<<endl;
   cin>>arr[i][j];
   }
  }

cout<<"Values in  each row :"<<endl;                           // displaying values in each row
for(int i=0;i<n;i++){
  for(int j=0;j<col[i];j++){
   cout<<arr[i][j]<<" ";
   }
   cout<<endl;
  }




for(int i=0;i<n;i++){                                 // deallocating all the  variables
  delete[]  arr[i];
  }
  delete[] arr;
  delete[] col;                             


return 0;
}


