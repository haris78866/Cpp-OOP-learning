                                            // Object Oriented Programming 
                                            
         // class : is a reserved keyword  ,it have data members ,  where space = data memeber + member function                                    
#include<iostream>
#include<string>
using namespace std;
/*
class xyz {
private :  
int a,b,c;

public :           // member acess specifier   public  : private :  protected :           
             // private specifier only acess in the private class means in the class (not outside the class)
void getdata(){
cout<<"Please enter the value of a b and c :"<<endl;
Cin>>a;
cin>>b;
cin>>c;
}            

void printdata(){
cout<<"The value of A :"<<a<<endl;
cout<<"The value of B :"<<b<<endl;
cout<<"The value of C :"<<c<<endl;
}       
};  // end of the class 




int main()
{
xyz my;


my.getdata();
my.printdata();


return 0;
}
*/



// constructer : special type of memeber function 
// it has same name  as that of the class name 
// construct the object and class
// automatically get calls whenever the object is declared  
// constructer is always public 


class rectangle{

private:
int length;
int width;


public: 
// default constructer
rectangle(){
length=0;
width=0;
}
// parameterizes constructer 
rectangle(int l, int w ){
length=l;
width=w;

}
// getter fun get the values from the variable 
// sette fun is used to assign the value to the variable
// these  should have the same data type 
  // getters             to use to get the value 
int getlength(){
return length;
}

int getwidth()
{
return width;
}
// setters            we use when have to change the values
void setlength(int l)
{
length=l;
}

void  setwidth(int w)
{
width=w;
}



int calArea(){
int area=length*width;
return area;
}
};



int main ()
{

rectangle r1(12,11);       // (12,11) is means we are assign the value
// calling the setter fun  
r1.setwidth(22);
// printing the values using getter fun
cout<<"The value of length is :"<<r1.getlength<<endl;
cout<<"The value of length is :"<<r1.getwidth<<endl;

cout<<"The area of the given recatngle is :"<<r1.calArea<<endl;

return 0;
}

