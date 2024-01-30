#include<iostream>

using namespace std;


int main ()
{
int i=1;

while (i<=5)
{
cout<<"x : "<<i<<endl;
i=i+1;
/*  if (i==2)
   {
    cout<<"Done with 2 !"<<endl;
    break;
    }
  */  
     if (i==2)
   {
    cout<<"Done with 2 !"<<endl;
    continue;
    }
  
}
cout<<"Done !"<<endl;
return 0;
}

