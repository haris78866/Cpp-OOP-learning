                                               // dynamic memory allocation 
                                               
#include<iostream>

using namespace std;

int main()
{

int *ptr =new int(5);

cout<<" value : "<<*ptr<<endl;
cout<<" address : "<<ptr<<endl;

delete ptr;


int *array = new int[4];

array[0]=1;
array[1]=3;
array[2]=2;
array[3]=5;

 for(int i=0;i<4;i++)
    { 
      cout<<"["<<array[i]<<"]"<<endl;
      }
      
      
 delete array;
 
return 0;
}
