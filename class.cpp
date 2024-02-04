// introduction to clases and object 
#include<iostream>
#include<string>

using namespace std;

class bankAccount
  {
  public :                        // acces specifier      its means these member are accessible are outside the class
   string name;
   int  balance;
   
   void withdraw(int amount)
      {
      balance=balance-amount;      // we can also make fun there instead of main 
      }
      
      
    void print()                 // fun for the print 
      {
      cout<<name<<" has "<<balance<<" dollers "<<endl;
      }
   };
   
int main()
{
 bankAccount  account1;            // these are known as the instances   or object 
 
   account1.name="Haris";        // here dot operter alows to get member variable over bankAcoount 
   account1.balance=3000;
   account1.print();
   //cout<<account1.name<<" has "<<account1.balance<<" dollars "<<endl;
   
  bankAccount account2;             // these are known as the instances   or object   and its differnet bank account 
   
    account2.name="Dawood";
   account2.balance=1499;
   account2.print();
   //cout<<account2.name<<" has "<<account2.balance<<" dollars "<<endl;
   //account2.balance=account2.balance-100;
   account2.withdraw(200);   // now we call that fun 
   //cout<<account2.name<<" has "<<account2.balance<<" dollars "<<endl;
    account2.print();
   
   return 0;
   } 

