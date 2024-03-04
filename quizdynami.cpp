#include<iostream>

using namespace std;


int main(){
int *array;
array=new int(3);

cout<<"Enter the new elemnet in the array : "<<endl;

for(int i=0;i<3;i++){
cin>>array[i];
}

cout<<"Enter elemnets in the array :"<<endl;
for(int i=0;i<3;i++){
cout<<array[i]<<endl;
}

delete[] array;
}


