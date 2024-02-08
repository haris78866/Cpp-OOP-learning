#include<iostream>
#include<string>

using namespace std;

struct array 
{
 int  age[10];
  string name[4][10];
};

int main()
{
array name1;

int i;

for(i=1;i<=3;i++)
   {
   cout<<"Enter the Name : "<<i<<endl;
   getline(cin,name1.name[i][0]);
   cout<<"Enter the age : "<<i<<endl;
   cin>>name1.age[i];
   }
   
for(i=1;i<=3;i++)
  {
   cout<<"Name : "<<name1.name[i][0]<<" & Age : "<<name1.age[i]<<endl;
   }
return 0;
}






