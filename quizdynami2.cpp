#include<iostream>

using namespace std;
void cal_matrix1(int **matrix1,int r1,int col1);
void cal_matrix2(int **matrix2,int r2,int col2);


int main(){
int r1,r2,col1,col2;
cout<<"Enter the size of row1 (matrix : 1) "<<endl;
cin>>r1;

cout<<"Enter the size of col1 (matrix : 1) "<<endl;
cin>>col1;

cout<<"Enteer the size of row2 (matrix : 2) "<<endl;
cin>>r2;

cout<<"Enter the size of col2 (matrix  : 2)"<<endl;
cin>>col2;

int **matrix1;

int **matrix2;

cal_matrix1(matrix1,r1,col1);
cal_matrix2(matrix2,r2,col2);
return 0;
}


void cal_matrix1(int **matrix1,int r1,int col1){
int i,j;
// dynamically allocating the matrx 1
matrix1=new int *[r1];

for(i=0;i<r1;i++){
matrix1[i]=new int[col1];
}


cout<<"Enter elements int the matrix 1 : "<<endl;
for(i=0;i<r1;i++){
  for(j=0;j<col1;j++){
   cin>>matrix1[i][j];
   }
 } 

cout<<"Matrix 1 :"<<endl;
for(i=0;i<r1;i++){
  for(j=0;j<col1;j++){
   cout<<matrix1[i][j]<<" ";  ///
   }
   cout<<endl;
 }
 
for(i=0;i<r1;i++){
delete[] matrix1[i];
}
delete[] matrix1;
}




void  cal_matrix2(int **matrix2,int r2,int col2){

int i,j;

// dynamically alloaction 
matrix2=new int*[r2];

for(i=0;i<r2;i++){
 matrix2[i]=new int[col2];
 }
 
cout<<"Enter the elments in the matrix 2"<<endl;
for(i=0;i<r2;i++){
 for(j=0;j<col2;j++){
    cin>>matrix2[i][j];
    }
}

cout<<"Elements in matrix 2 :"<<endl;
for(i=0;i<r2;i++){
  for(j=0;j<col2;j++){
  cout<<matrix2[i][j]<<" ";//
  }
  cout<<endl;
}


for(i=0;i<r2;i++){
delete[] matrix2[i];
 }
delete [] matrix2;
}











