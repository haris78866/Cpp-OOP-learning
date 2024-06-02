#include<iostream>
#include<string>
using namespace std;


void tak(int **mat1, int **mat2);
void  show(int **mat1, int **mat2);
void  addition(int **mat1, int **mat2,int **add);


int main(){
int **mat1;
int **mat2;
int **add;

mat1=new int *[3];
mat2=new int *[3];
add=new int *[3];

for(int i=0;i<3;i++){
mat1[i]=new int[3];
mat2[i]=new int[3];
add[i]=new int [3];
}


tak(mat1,mat2);
show(mat1,mat2);
addition(mat1,mat2,add);


for(int i=0;i<3;i++){
delete mat1[i];
delete mat2[i];
delete add[i];
}
delete mat1;
delete mat2;
delete add;

return 0;
}



void  tak(int **mat1, int **mat2){


cout<<"Enter elements int the 1st matrix : "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
  cin>>mat1[i][j];
  }
}


cout<<"Enter elements int the 1st matrix : "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      cin>>mat2[i][j];
  }
}


}



void  show(int **mat1, int **mat2){


cout<<"Elements int the 1st matrix : "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
  cout<<mat1[i][j]<<" ";
  }
  cout<<endl;
}


cout<<"Elements int the 1st matrix : "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      cout<<mat2[i][j]<<"  ";
  }
  cout<<endl;
}


}



void  addition(int **mat1, int **mat2,int **add){



for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
  add[i][j]=mat1[i][j]+mat2[i][j];
  }
  cout<<endl;
}


cout<<"Addition of  1st matrix  and 2nd matrix : "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      cout<<add[i][j]<<"  ";
  }
  cout<<endl;
}


}









