#include<iostream>
using namespace std;
// function prototypes  
void Creating_matrices1(int **&matrix1, int &row1, int &col1);
void Creating_matrices2(int **&matrix2, int &row2, int &col2);
void Taking_Value(int **matrix1, int **matrix2, int row1, int col1, int row2, int col2);
void Dispaly_value(int **matrix1, int **matrix2, int row1, int col1, int row2, int col2);
void Addition(int **matrix1, int **matrix2, int **sum, int row1, int col1);
void Subtraction(int **matrix1,int **matrix2,int **sub, int row1, int col1);
void Multiplication(int ** matrix1, int **matrix2, int **mul, int row1,int col1);
void Transpose(int **mul, int **trans,int row1, int col1);

int main()
{
     int i, j;
    int row1, col1, row2, col2;
    int **matrix1;                     // allocating all the variable statically 
    int **matrix2;
    int **sum;
    int **sub;
    int **mul;
    int **trans;
    // calling function 
    Creating_matrices1(matrix1, row1, col1);
    Creating_matrices2(matrix2, row2, col2);
    Taking_Value(matrix1, matrix2, row1, col1, row2, col2);
    Dispaly_value(matrix1, matrix2, row1, col1, row2, col2);

    sum=new int *[row1];                // dynacmicallly allocated  all the variables
    sub=new int *[row1]; 
    mul=new int *[row1];
    trans=new int*[row1];
    for (i=0;i<row1;i++)
    {
        sum[i] = new int[col1];
        sub[i]=new int [col1];
        mul[i]=new int [col1];
        trans[i]=new int[col1];
    }
     // calling function of different arthimetic operteration
   Addition(matrix1, matrix2, sum, row1, col1);
   Subtraction(matrix1,matrix2,sub,row1,col1);
   Multiplication(matrix1,matrix2,mul,row1,col1);
   Transpose(mul,trans,row1,col1);
    for (i = 0; i < row1; i++)
    {
        delete[] matrix1[i];                     // deallocating all the variables
        delete[] matrix2[i];
        delete[] sum[i];
        delete[]  sub[i];
        delete[]  mul[i];
        delete[]  trans[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] sum;
    delete[] sub;
    delete[] mul;
    delete[] trans;
    return 0;
}

void Creating_matrices1(int **&matrix1, int &row1, int &col1)                // fucntion of creating matirx1 
{
    cout<<"Enter the rows and coloumn according to the rules of matrix :"<<endl;
    cout << "Enter the num of rows  for the matrix(1): " << endl;
    cin >> row1;

    cout << "Enter the num of col for the matrix(1) :" << endl;
    cin >> col1;

    matrix1 = new int *[row1];
    for (int i = 0; i < row1; i++)
    {
        matrix1[i] = new int[col1];
    }
}

void Creating_matrices2(int **&matrix2, int &row2, int &col2)              // function for the creating matrix2 
{
    cout << "Enter the num of rows  for the matrix(2): " << endl;
    cin >> row2;

    cout << "Enter the num of col for the matrix(2) :" << endl;
    cin >> col2;

    matrix2 = new int *[row2];
    for (int i = 0; i < row2; i++)
    {
        matrix2[i] = new int[col2];
    }
}

void Taking_Value(int **matrix1, int **matrix2, int row1, int col1, int row2, int col2)        // taking value for the matrix1  and matrix2
{
    // taking value for the matrix 1 and 2
    cout << "Enter values for matrix 1:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter values for matrix 2:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
}

void Dispaly_value(int **matrix1, int **matrix2, int row1, int col1, int row2, int col2)    // fucntion for dispalaying the value of the matrix
{
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
}

void Addition(int **matrix1, int **matrix2, int **sum, int row1, int col1)    // function for adding of two matrix (matrix1 and matrix2)
{
int i,j;
    cout << "Sum of matrices:" <<endl;
    for(i=0;i<row1;i++){
     for(j=0;j<col1;j++){
 sum[i][j]=matrix1[i][j]+matrix2[i][j];
   }
 } 
 for(i=0;i<row1;i++){
     for(j=0;j<col1;j++){
 cout<<sum[i][j]<<" ";
}
cout<<endl;
} 
}   

void Subtraction(int **matrix1,int **matrix2,int **sub, int row1, int col1) // function for subtraction of two of matirx (matrix1 and matrix2)
{
int i,j;
    cout << "Sub of matrices:" <<endl;
    for(i=0;i<row1;i++){
     for(j=0;j<col1;j++){
 sub[i][j]=matrix1[i][j]-matrix2[i][j];
   }
 } 
 for(i=0;i<row1;i++){
     for(j=0;j<col1;j++){
 cout<<sub[i][j]<<" ";
}
cout<<endl;
} 
}

void Multiplication(int ** matrix1, int **matrix2, int **mul, int row1,int col1)  // function for multiplicaton of two matrix (matrix1 and matrix2)
{

int i,j,k;
// multiplying the both matirx
for(i=0;i<row1;i++){
      for(j=0;j<col1;j++){
       mul[i][j]=0;
        for(k=0;k<row1;k++){
   mul[i][j]+=matrix1[i][k]*matrix2[k][j];
   }
  }
}
// displaying the multipication  fo two matrix
cout<<"MUltiplication of two matrix :"<<endl;
for(i=0;i<row1;i++){
      for(j=0;j<col1;j++){
   cout<<mul[i][j]<<" ";
   } 
   cout<<endl; 
}   
}

void Transpose(int **mul, int **trans,int row1, int col1)  // function for taking the transpose of multiplacation matrix
{
int i,j;

// taking tarnspose of two matrix
for(i=0;i<row1;i++){
    for(j=0;j<col1;j++){
    trans[j][i]=mul[i][j];
    }
}   
// displaying the transpose of two matirx
cout<<"Transpose of  matrix :"<<endl;
for(i=0;i<row1;i++){
      for(j=0;j<col1;j++){
   cout<<trans[i][j]<<" ";
   } 
   cout<<endl; 
}
}

