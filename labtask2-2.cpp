#include<iostream>
// i suppose all these global variables  
#define pennis 90
#define nickels 50
#define dimes  10
#define quarter 20
#define dollar 284

using namespace std;

int main ()
{
int value;
  cout<<"Enter the value : "<<endl;
  cin>>value;
  
  if(value==dollar)
    {
    cout<<"COngragulation you won the game  "<<endl;
    }
    
  
   
   else
    { 
    int result1=dollar-nickels;
    int result2=dollar-dimes;
    int result3=dollar-quarter;
    int result4=dollar-pennis;
    
    cout<<"You need   : "<<result1<< "nickels for 1 doller"<<endl;
    cout<<"You need :   "<<result2<< " dimes for 1 doller"<<endl;
    cout<<"You need     "<<result3<< " quarter  for 1 doller"<<endl;
    cout<<"You need  :  "<<result4<< " pennisfor 1 doller"<<endl;
    }
   
    
    return 0;
    }
