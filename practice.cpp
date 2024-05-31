#include<iostream>
#include<string>
using namespace std;


class my {


private:
int *arr;
int size;

public:

my(int size) : size(size){
arr=new int [size];
}

~my(){
delete[] arr;
}


void tak(){
cout<<"Enter the value in the array :"<<endl;
for(int i=0;i<size;i++){
cin>>arr[i];
}
}

void show(){
cout<<"Elemets in the array :"<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
}

};

int main(){

my a(4);

a.tak();
a.show();


return 0;
}





