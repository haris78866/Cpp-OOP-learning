#include<iostream>
#include<string>
using namespace std;

void tak_matrix1(int **matrix1,int row1,int col1 );
void tak_matrix2(int **matrix2,int row2,int col2 );

int main(){

int row1,row2;
int col1,col2;

cout<<"Enter the row1 :"<<endl;
cin>>row1;

cout<<"Enter the row2 :"<<endl;
cin>>row2;

cout<<"Enter the col 1 :"<<endl;
cin>>col1;

cout<<"Enter the col2 :"<<endl;
cin>>col2;

int **matrix1;
int **matrix2;

tak_matrix1(matrix1,row1,col1 );
tak_matrix2(matrix2,row2,col2 );


for(int i=0;i<row1;i++){
  delete matrix1[i];
  delete matrix2[i];
  }
delete[] matrix1;
delete[] matrix2;
  
return 0;
}



void tak_matrix1(int **matrix1,int row1,int col1 )
{
matrix1=new int*[row1];
// dynamically allocation 
for(int i=0;i<2;i++){
matrix1[i]=new int[col1];
}


cout<<"Enter elements in arr1 :"<<endl;
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
    cin>>matrix1[i][j];
    }
}

cout<<"Elements in the arr1 :"<<endl;
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
   cout<<matrix1[i][j]<<" ";
    }
   cout<<endl;
  }     
} 
 
 
void tak_matrix2(int **matrix2,int row2,int col2 )
{
matrix2=new int*[row2];
// dynamically allocation 
for(int i=0;i<2;i++){
matrix2[i]=new int[col2];
}


cout<<"Enter elements in arr2 :"<<endl;
for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
    cin>>matrix2[i][j];
    }
}


cout<<"Elements in the arr 2 :"<<endl;

for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
   cout<<matrix2[i][j]<<" ";
    }
   cout<<endl;
  }     
} 
  
 
 





