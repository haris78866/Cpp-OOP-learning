#include<iostream>
#include<string>

using namespace std;


class Name 
{
public:
 string name;
 
 void total()
 {
 cout<<"My age is "<<my_age()<<endl;
 }
 
 void print()
 {
 cout<<"My name is : "<<name<<endl;
 }

private:
int age=12;

int my_age()
{
return age;
} 
};







int main()
{
 Name myname1;
 myname1.name="Haris";
 
 
 myname1.print();
 myname1.total();
 


return 0;
}
