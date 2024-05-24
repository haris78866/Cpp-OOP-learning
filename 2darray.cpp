#include<iostream>
#include<string>

using namespace std;

int main(){

int row,col;

cout<<"Enter the no of row : "<<endl;
cin>>row;


cout<<"Enter the num of col :"<<endl;
cin>>col;

int arr[row][col];

cout<<"Enter the elements in the array :"<<endl;
for(int i=0;i<row;i++)
  for(int j=0;j<col;j++)
    cin>>arr[i][j];


cout<<"Elments in the array :"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
      }
   cout<<endl;   
   }   
      
      


return 0;
}

