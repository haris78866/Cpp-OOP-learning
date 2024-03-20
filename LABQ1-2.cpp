                                             // DYNAMICALLY ALLOCATION OF 2-D ARRAY
#include<iostream>
#include<string>
using namespace std;

// function prototpes
void takingVal_matrix1(int **matrix1,int row1,int col1);
void takingVal_matrix2(int **matrix2,int row2,int col2);

int main(){
// as an example am taking two MATRIX DYNAMICALLY

// taking row and coloumns for MATRIX 1 & 2 

int row1,row2;
int col1,col2;
cout<<"Enter the rows for MATRIX 1   :"<<endl;
cin>>row1;

cout<<"Enter the coloumn for MATRIX 1:"<<endl;
cin>>col1;

cout<<"Enter the rows for MATRIX 2   :"<<endl;
cin>>row2;

cout<<"Enter the coloumn for MATRIX 2:"<<endl;
cin>>col2;

int **matrix1;
int **matrix2;
// dynamically allocation  for rows
matrix1=new int*[row1];
matrix2=new int*[row2]; 


// function calling 
takingVal_matrix1(matrix1,row1,col1);
takingVal_matrix2(matrix2,row2,col2);

//  dynamically allocated dealloocation 
for(int i=0;i<row1;i++){
delete matrix1[i];
delete matrix2[i];
}
delete matrix1;
delete matrix2;

return 0;
}                                                                        
     
     
// taking value from user for matrix 1  
void takingVal_matrix1(int **matrix1,int row1,int col1){

// dyanamically allocation for coloumns
for(int i=0;i<row1;i++){
matrix1[i]=new int[col1];
}


cout<<"Enter elemnts in the matrix 1 :"<<endl;
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
   cin>>matrix1[i][j];
   }
}

cout<<"Elements in the matrix 1"<<endl;
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
   cout<<matrix1[i][j]<<" ";
   }
   cout<<endl;
}
}



// taking value from user  for matrix 2
void takingVal_matrix2(int **matrix2,int row2,int col2){

// dyanamically allocation for coloumns
for(int i=0;i<row2;i++){
matrix2[i]=new int[col2];
}


cout<<"Enter elemnts in the matrix 2 :"<<endl;
for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
   cin>>matrix2[i][j];
   }
}

cout<<"Elements in the matrix 2"<<endl;
for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
   cout<<matrix2[i][j]<<" ";
   }
   cout<<endl;
}
}






