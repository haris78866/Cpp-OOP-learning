                       // specially when we use unique arthimatic operaton like += or -= we use this operator to return the value to the same object 
#include<iostream>
#include<string>
using namespace std;

class check {
private:
int value;
public:
check(int v): value(v){
}


check& operator+=(const check& other){
this->value+=other.value;
return *this;
}

void display(){
cout<<"Value :"<<value<<endl;
}

};


int main(){


check c1(10);
check c2(10);

c1+=c2;

c1.display();


return 0;
}
