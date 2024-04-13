                                               // dynamic memory allocation 
                                               
#include<iostream>

using namespace std;
void taking();
int main()
{

taking();


return 0;
}

// this is dynamically  allocated  for 1D array

 
/*
void Taking_value()
{
int size;

cout<<"Enter the size of an array :"<<endl;
cin>>size;


int *array;

array=new int(size);

// enter the elment in the array 

int i;

cout<<"enter the elments in the array"<<endl;
for(i=0;i<size;i++){
   cin>>array[i];
   }
   
   for(i=0;i<size;i++){
   cout<<"index : "<<" "<<i<<array[i]<<endl;
   
   }
   
   delete array;
   

  
}
*/

// this is dyanmically alloacated for 2D arrays
void taking()
{
int size;

cout<<"Enter the size of an array : "<<endl;
cin>>size;


int **array;
array=new int*[2];

int i,j;

for(i=0;i<size;i++)
  {
  array[i]=new int[2];
  }
  
  
cout<<"Taking elemnet in the array :"<<endl;

for(i=0;i<size;i++)
   {
   for(j=0;j<size;j++){
   cin>>array[i][j];
   }
  }


for(i=0;i<size;i++)
   {
   for(j=0;j<size;j++){
   cout<<"element : "<<i<<" "<<j<<array[i][j]<<endl;
   }
  }

delete []array;
}





//














