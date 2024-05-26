#include<iostream>                               // 2D array pointer array 
#include<string>
using namespace std;


int main(){


int (*ptr)[2];
int arr[2][2]={ {1,2} ,{1,2} };

ptr=arr;

for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
    cout<<arr[i][j]<<" ";
    }
cout<<endl;
}


for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
       cout<<"Adress "<<*(ptr+i) + j<< "  Content "<<*((*ptr + i)+ j)<<endl;
       }
    }
      


return 0;
}



