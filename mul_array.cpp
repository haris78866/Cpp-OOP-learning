#include<iostream>
#include<string>

using namespace std;


int main (){

int r1,c1,r2,c2;

cout<<"Enter the elemenst in the row1 :"<<endl;
cin>>r1;

cout<<"Enter elemets in the coloumn1 :"<<endl;
cin>>c1;


cout<<"Enter the elemenst in the row2 :"<<endl;
cin>>r2;

cout<<"Enter elemets in the coloumn2 :"<<endl;
cin>>c2;

int arr1[r1][c1];

cout<<"Enter elemenst in the matrix1  : "<<endl;
for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
     cin>>arr1[i][j];
     }
}


int arr2[r2][c2];

cout<<"Enter elemenst in the matrix2  : "<<endl;
for(int i=0;i<r2;i++){
   for(int j=0;j<c2;j++){
     cin>>arr2[i][j];
     }
}




cout<<"Elements in the matrix1 : "<<endl;
for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
    cout<<arr1[i][j]<<" ";
    }
cout<<endl;
}






cout<<"Elements in the matrix2 : "<<endl;
for(int i=0;i<r2;i++){
   for(int j=0;j<c2;j++){
    cout<<arr2[i][j]<<" ";
    }
cout<<endl;
}


int k;
int mul[r1][c1];

for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
    mul[i][j]=0;
    for(int k=0;k<c1;k++){
    mul[i][j]+=arr1[i][k]*arr2[k][j];
    }
  }
}


cout<<"Multiplication of two matrix  : "<<endl;
for(int i=0;i<r2;i++){
   for(int j=0;j<c2;j++){
    cout<<mul[i][j]<<" ";
    }
cout<<endl;
}
    


return 0;
}

