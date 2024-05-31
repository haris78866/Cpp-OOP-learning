#include<iostream>
#include<string>
using namespace std;

class shallow   {
private:
int x;

public:

shallow(){
}

shallow(int x ) : x(x){
}

shallow(const shallow & other ){
x=other.x;
}

void show(){
cout<<"Value of X :"<<x<<endl;
}

};


int main(){
shallow p1(10);

p1.show();

shallow p2=p1;
p2.show();


return 0;
}

