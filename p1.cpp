#include<iostream>
#include<string>
using namespace std;

void cal1(int **arr1, int r1,int c1);
void cal2(int **arr2, int r2,int c2);

int main(){
int r1,r2,c1,c2;

cout<<"Enter the row 1 : "<<endl;
cin>>r1;

cout<<"Enter the row 2 : "<<endl;
cin>>r2;


cout<<"Enter  the coloumn 1 : "<<endl;
cin>>c1;

cout<<"Enter the coloumn 2 : "<<endl;
cin>>c2;


int **arr1,**arr2;
arr1=new int*[r1];
arr2=new int*[r2];

int i;
for( i=0;i<c1;i++){
   arr1[i]=new int[c1];
   arr2[i]=new int[c2];
 }



cal1(arr1,r1,c1);
cal2(arr2,r2,c2);

for(i=0;i<c1;i++){
  delete arr1[i];
  delete arr2[i];
  }
delete[] arr1;
delete[] arr2;

return 0;
}


void cal1(int **arr1, int r1,int c1){

int i,j;

cout<<"Enter the elements in the first array :"<<endl;
for(i=0;i<r1;i++){
   for(j=0;j<c1;j++){
     cin>>arr1[i][j];
     }
  }
  
  
cout<<"Elements in the first aarray : "<<endl;
  for(i=0;i<r1;i++){
   for(j=0;j<c1;j++){
     cout<<arr1[i][j]<<" ";
     }
     cout<<endl;
  }   

}

void cal2(int **arr2, int r2,int c2){

int i,j;

cout<<"Enter the elements in the second  array :"<<endl;
for(i=0;i<r2;i++){
   for(j=0;j<c2;j++){
     cin>>arr2[i][j];
     }
  }
  
  
cout<<"Elements in the second aarray : "<<endl;
  for(i=0;i<r2;i++){
   for(j=0;j<c2;j++){
     cout<<arr2[i][j]<<" ";
     }
     cout<<endl;
  }   

}



