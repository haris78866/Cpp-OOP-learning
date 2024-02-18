#include<iostream>

using namespace std;

// function prototypes
void Taking_vlaue(int **arr1,int **arr2,int size);
void Display_Value(int **arr1, int **arr2,int size);
void Addition(int **arr1,int **arr2, int **sum,int size);
void Subtraction(int **arr1,int **arr2 ,int **sub,int size);
void Multiplication(int **mul,int **arr1, int **arr2,int size);
void Tranpose(int **trans,int **mul, int size);

int main()
{
int size;
cout<<"Enter the size of an array :"<<endl;                   // taking size of an array 
cin>>size;

int **arr1;
int **arr2;   
int **mul;
int **sum;  
int **sub;  
int **trans;                  //statically allocated       for the matrix 1
arr1=new int *[size];
arr2=new int *[size]; 
mul=new int *[size]; 
sum=new int *[size];
sub=new int *[size]; 
trans=new int *[size];                // dynamically allocated for the matrix 1
int i,j;

for(i=0;i<size;i++)
  {
    arr1[i]=new int[size];
    arr2[i]=new int[size];
    mul[i]=new int[size];
    sum[i]=new int[size]; 
    sub[i]=new int[size];
    trans[i]=new int[size];
  }

// calling all the functions
Taking_vlaue(arr1,arr2,size);
Display_Value(arr1,arr2,size);
Addition(arr1,arr2 ,sum,size);
Subtraction(arr1,arr2,sub ,size);   
Multiplication(mul,arr1,arr2,size);
Tranpose(mul,trans,size);
   
for(i=0;i<size;i++){ 
   delete[] arr1[i];
   delete[] arr2[i]; 
   delete[] sum[i]; 
    delete[] sub[i];                             // deallocating the  variable
   delete[] trans[i];
   delete[] mul[i];
  }
  delete[] arr1;
  delete[] arr2;
  delete[] sum; 
  delete[] sub; 
  delete[] trans;
  delete[] mul;
  
return 0;
}


void Taking_vlaue(int **arr1,int **arr2,int size)                 // function for the user to input value
{
int i,j;

// taking value for the matrix 1 
cout<<"Enter the value for the matix 1 :"<<endl;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      cin>>arr1[i][j];
     } 
   }
   
// takong the value for the matrix 2
cout<<"Enter the value for the matrix 2: "<<endl;
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         cin>>arr2[i][j];
      }      
    }
}

void Display_Value(int **arr1, int **arr2,int size)          // function for displaying the value
{
int i,j;

// displaying  value for the matrix 1 
cout<<"Value for the matix 1 :"<<endl;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      cout<<arr1[i][j]<<" ";
     } 
     cout<<endl;
   }
   
// displaying the value for the matrix 2
cout<<"Value for the matrix 2: "<<endl;
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         cout<<arr2[i][j]<<" ";
      } 
    cout<<endl;     
    }
}

void Addition(int **arr1,int **arr2 ,int **sum,int size)           // function for the addition 
{
int i,j;
// calculating the sum of two matrix
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         sum[i][j]=arr1[i][j]+arr2[i][j];
      }      
    }
 
// displaying the sum  of two matrix
cout<<"The sum of two matrix : "<<endl;         
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         cout<<sum[i][j]<<" ";
      } 
    cout<<endl;     
    }
}

void Subtraction(int **arr1,int **arr2, int **sub,int size)     // function for the subtraction 
{
int i,j;

// calculating the subtraction of two matrix
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         sub[i][j]=arr1[i][j]-arr2[i][j];
      }      
    }
 
// displaying the subtraction  of two matrix
cout<<"The sub of two matrix : "<<endl;         
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         cout<<sub[i][j]<<" ";
      } 
    cout<<endl;     
    }       
}

void Multiplication(int **mul,int **arr1,int **arr2,int size)           // multiplicatin function that take  two matrix ( arr1 and arr2)
{ 
int i,j,k;
// multiplying the both matirx
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
       mul[i][j]=0;
        for(k=0;k<size;k++){
   mul[i][j]+=arr1[i][k]*arr2[k][j];
   }
  }
}
// displaying the multipication  fo two matrix
cout<<"MUltiplication of two matrix :"<<endl;
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
   cout<<mul[i][j]<<" ";
   } 
   cout<<endl; 
}   
}
   
void Tranpose(int **mul,int **trans, int size)        // transpose function (i am taking the transpose of mulplication matrix)
{
int i,j;

// taking tarnspose of two matrix
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
    trans[j][i]=mul[i][j];
    }
}   
// displaying the transpose of two matirx
cout<<"Transpose of  matrix :"<<endl;
for(i=0;i<size;i++){
      for(j=0;j<size;j++){
   cout<<trans[i][j]<<" ";
   } 
   cout<<endl; 
}
}
   
