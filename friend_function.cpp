#include<iostream>
#include<string>
using namespace std;

class counter {

//friend void  set_to_zero(counter & Counter);

friend counter operator+(counter c1, counter  c2);
friend counter operator*(int m,counter count);

private:
int count;
 

public:

counter(int count ) : count (count) {
}

void print(){
cout<<count<<endl;
}


void increment() {
count++;
}

// make an function to control the operater overloading 
//it is also poosible thorugh friend  function 
// friend function is not  a member  of a class but it has access to 
//priavte   and protected data  member to the class
/*
counter operator+(counter const & Counter){
counter new_counter(count+Counter.count);
return new_counter;
}
*/



};
//actually the count is a private member here we are accessing through the frined function 

// funciton defination here
void  set_to_zero(counter & Counter){
Counter.count=0;
}

counter operator+(counter c1, counter  c2){
counter new_count=c1.count+c2.count;
return counter(new_count);
}


 counter operator*(int m,counter count){
int new_count=m*counter.count();
return counter(new_count);
}

int main()
{

counter  counter1(7);

counter1.increment();
counter1.print();


counter counter2(3);

counter2.increment();
counter2.print();

//  here we can not  use that + sign without operater overloading 
counter counter3=counter1 + counter2;

counter3.print();

// we are able to change the private member thorugh friend 
//set_to_zero(counter3);
counter3.print();


// we can also use as a left operand without counter
counter counter4(5);

counter counter5=20*counter4;

counter5.print();

return 0;
}
