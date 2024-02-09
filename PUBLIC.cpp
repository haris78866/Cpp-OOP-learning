                                   // public and private access specifier 
#include<iostream>
#include<string>

using namespace std;
 
// public and private access specifer shows where the class can be used

//  by using public access specifier  we can access  outside the class defination  
// but with private we can not access outside the class defination 

class   Employee
  {
  public:                   // public 
  string name;
  int age;
  
  void print_bonus()
   {
    cout<<bonus_salary()<<" bonus "<<endl;
         
   }
   
  private:                   // private 
  int salary=12;
  
  int  bonus_salary()
   {
    return salary*1;
   }

  };
  


int main ()
 {
 Employee  employee1;
    employee1.name="Haris";
    employee1.age=20;       
    
    
    
    cout<<employee1.name<<"  is "<<employee1.age<<" old "<<endl;
     employee1.print_bonus();    // call the fun
    
return 0;
}

