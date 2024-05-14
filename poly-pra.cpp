#include<iostream>
#include<string>
using namespace std;

template <typename T>
T find(T a ,T b )
{
if(a>b ) return  a;
else return b;
}




template <typename T1, typename  T2>
int big(T1 a,T2 b)
{
if(sizeof(a)>sizeof(b)) return sizeof(a);
else return sizeof(b);
}


int main(){

int m=6,n=5;

int result=find<double>(m,n);
cout<<"Max "<<result<<endl;


double x=9;
char a='v';

int  max=big(x,a);
cout<<"Big "<<max<<endl;




return 0;
}

