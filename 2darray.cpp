#include<iostream>
#include<string>

using namespace std;


int main(){
int row,col;

cout<<"Enter the num of rows : "<<endl;
cin>>row;


cout<<"Enter the num of coloumn :"<<endl;
cin>>col;

int arr[row][col];

cout<<"Enter elements in the matrix :"<<endl;
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
     cin>>arr[i][j];
  }
}

cout<<"Elements in the matrix :"<<endl;
for(int i=0;i<row;i++){
   for(int j=1;j<col;j++){
 cout<<"  Index : "<<"["<<i<<"]"<<"["<<j<<"]"<<" : "<<arr[i][j];
 }
cout<<endl;
}

int lar;

for(int i=0;i<row;i++){
    lar =  arr[i][0];
      for(int j=0;j<col;j++){
       if(arr[i][j]>lar){
     lar=arr[i][j];
     }
   }
cout<<"Largest   elemet in each row : "<<lar<<endl;
 }


 
 
 
 
 
int largest ; 
for(int i=0;i<col;i++){
    largest=arr[i][0];
   for(int j=0;j<row;j++){
     if(arr[i][j]>col){
    largest=arr[i][j];
    }
}
cout<<"Largest num in the coloumn : "<<largest<<endl;
}


return 0;
}

