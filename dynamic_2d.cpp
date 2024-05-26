#include<iostream>
using namespace std;

void taking(int **matrix1,int **matrix2);
void showing(int **matrix1,int **matrix2);


int main(){
int **matrix1;
int **matrix2;

matrix1=new  int*[2];
matrix2=new int *[2];

for(int i=0;i<2;i++){
  matrix1[i]=new int[2];
  matrix2[i]=new int[2];
 }
 
 
 
taking(matrix1,matrix2);
showing(matrix1,matrix2);

 
 
// deallocting matrix1 and matrix2
for(int i=0;i<2;i++){
delete[] matrix1[i];
delete[]  matrix2[i];
}
delete[]  matrix1;
delete[] matrix2;
 


return 0;
}




void taking(int **matrix1,int **matrix2){

cout<<"Enter value in the matrix 1 :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cin>>matrix1[i][j];
  }
}


cout<<"Enter value in the matrix 2 :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cin>>matrix2[i][j];
  }
}

}

void showing(int **matrix1,int **matrix2){

cout<<"Value in the matrix 1 :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cout<<matrix1[i][j]<<" ";
  }
  cout<<endl;
}


cout<<"Value in the matrix 2 :"<<endl;
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cout<<matrix2[i][j]<<" ";
  }
  cout<<endl;
}

}


