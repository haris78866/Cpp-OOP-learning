#include<iostream>
#include<string>
using namespace std;

void cal(int *area, int no);

// 1D array using dynamically 
int main(){

int no;
cout<<"Enter the num of rows :"<<endl;
cin>>no;


int *area;
area=new int(no);

cal(area,no);


delete area;

return 0;
}


void cal(int *area, int no){

cout<<"Enter the elements im the array :"<<endl;
for(int i=0;i<no;i++){
cin>>area[i];
}


cout<<"Elements in the array :"<<endl;
for(int i=0;i<no;i++){
cout<<area[i]<<endl;
}

}

