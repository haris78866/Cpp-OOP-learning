#include<iostream>

using namespace std;

  class day {
 
   private:
  
  int x;
  public:
  
  int info();
  };
  
  
int day :: info(){
cout<<x;
return 0;
}


int main()
{
day p1;
p1.info();




return 0;
}
