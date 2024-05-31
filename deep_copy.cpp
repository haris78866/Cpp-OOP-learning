#include<iostream>
#include<string>
using namespace std;

class deep {
private:
int *x;

public:


deep(){
}

deep(int n){
x=new int(n);
}

deep(const deep & other){
x=new int(*(other.x));
}



void show(){
cout<<"Value of X deep copy :"<<*x<<endl;
}


~deep(){
delete x;
}


};

int main(){
deep *ptr1=new deep(10);
deep *ptr2=new deep(*ptr1);



ptr1->show();
ptr2->show();


delete ptr1;
delete ptr2;

return 0;
}
