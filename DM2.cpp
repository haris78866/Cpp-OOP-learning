#include<iostream>
#include<string>
using namespace std;
void cal1(int **m1,int r1,int c1);
void cal2(int **m2,int r2,int c2);


int main()
{
int r1,r2;
int c1,c2;

cout<<"Enter the no of row 1 :"<<endl;
cin>>r1;

cout<<"Enter the col 1 :"<<endl;
cin>>c1;

cout<<"Enter the size of row 2 :"<<endl;
cin>>r2;

cout<<"Enter the size of col 2 :"<<endl;
cin>>c2;

int **m1,**m2;

m1=new int*[r1];
m2=new int*[r2];

for(int i=0; i<c1;i++){
m1[i]=new int[c1];
m2[i]=new int[c2];
}

cal1(m1,r1,c1);
cal2(m2,r2,c2);

for(int i=0;i<r1;i++){
 delete[] m1[i];
 delete[] m2[i];
 }
delete[] m1;
delete[] m2;

return 0;
}



void cal1(int **m1,int r1,int c1){

cout<<"Enter the elments in the array :"<<endl;
for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
 cin>>m1[i][j];
 }
}

cout<<"Elments in the matrix 1 :"<<endl;
for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
 cout<<m1[i][j]<<" ";
 }
 cout<<endl;
}
}




void cal2(int **m2,int r2,int c2){

cout<<"Enter the elments in the array :"<<endl;
for(int i=0;i<r2;i++){
   for(int j=0;j<c2;j++){
 cin>>m2[i][j];
 }
}

cout<<"Elments in the matrix 1 :"<<endl;
for(int i=0;i<r2;i++){
   for(int j=0;j<c2;j++){
 cout<<m2[i][j]<<" ";
 }
 cout<<endl;
}
}


