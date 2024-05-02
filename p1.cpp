#include<iostream>
#include<string>
using namespace std;





int main(){
int **arr1;
int **arr2;

arr1=new arr*(r1);
arr2=new arr*(r1);

int i;

for(i=0;i<c1;i++){
 arr1[i]=new int(c1);
 arr2[i]=new int(c2);
}



r1,r2,c1,c2;
cout<<"Enter the value for row 1 :"<<endl;
cin>>r1;


cout<<"Enter the value for row 2 :"<<endl;
cin>>r2;

cout<<"Enter the value for coloumn :"<<endl;
cin>>c1;

cout<<"Enter the value for coloumn  2: "<<endl;
cin>>c2;






for(i=0;i<r1;i++){
delete arr1[i];
delete arr2[i];
}
delete[] arr1;
delete[] arr2;


return 0;
}
