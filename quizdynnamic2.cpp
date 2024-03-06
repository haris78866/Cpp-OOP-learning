#include<iostream>

using namespace std;

void value_matrix2(int **matrix2, int r2,int c2);
void value_matrix1(int **matrix1, int r1,int c1);
void multiplication(int **matrix1,int **matrix2,int r1,int c1,int **mul);

int main(){


int r1,r2,c1,c2;

cout<<"Enter the number of row 1 :"<<endl;
cin>>r1;


cout<<"Enter the col 1 :"<<endl;
cin>>c1;


cout<<"Enter the number of row 2 :"<<endl;
cin>>r2;

cout<<"Enter the col 2 :"<<endl;
cin>>c2;


int **matrix1;
matrix1=new int*[r1];

for(int i=0;i<c1;i++){
matrix1[i]=new int[c1];
}

int **matrix2;
matrix2=new int*[r2];

for(int i=0;i<c2;i++){
matrix2[i]=new int[c2];
}

int **mul;
mul=new int*[r2];

for(int i=0;i<c2;i++){
mul[i]=new int[c2];
}

value_matrix1(matrix1,r1,c1);
value_matrix2(matrix2,r1,c2);
multiplication(matrix1,matrix2,r1,c1,mul);


// dealloacting all the matrix1 nad matrix 2

for(int i=0;i<r1;i++){
delete[] matrix1[i];
delete[] matrix2[i];
delete[] mul[i];
}
delete[] matrix1;
delete[] matrix2;
delete[] mul;

return 0;
}




void value_matrix1(int **matrix1, int r1,int c1){

// taking value for matrix 1
cout<<"Enter elements in the array  :"<<endl;
for(int i=0;i<r1;i++){
 for(int j=0;j<c1;j++){
    cin>>matrix1[i][j];
    }
  }
  
cout<<"Elements in the array :"<<endl;  
for(int i=0;i<r1;i++){
 for(int j=0;j<c1;j++){
    cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
  }
   

}

void value_matrix2(int **matrix2, int r2,int c2){

// taking value for matrix 2
cout<<"Enter elements in the array  :"<<endl;
for(int i=0;i<r2;i++){
 for(int j=0;j<c2;j++){
    cin>>matrix2[i][j];
    }
  }
  
cout<<"Elements in the array :"<<endl;  
for(int i=0;i<r2;i++){
 for(int j=0;j<c2;j++){
    cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
  }
   

}




void multiplication(int **matrix1,int **matrix2,int r1,int c1,int **mul){


for(int i=0;i<r1;i++){
  for(int j=0;j<c1;j++){
     for(int k=0;k<c1;k++){
   mul[i][j]+=matrix1[i][k]*matrix2[k][j];
   }
}
}

cout<<"Multiplication of two matrix :"<<endl;
for(int i=0;i<r1;i++){
  for(int j=0;j<c1;j++){
     cout<<mul[i][j]<<" ";
   }
   cout<<endl;
}

}






