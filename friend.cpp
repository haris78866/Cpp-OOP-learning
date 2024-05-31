#include<iostream>
#include<string>
using namespace std;

class cal {
private:
int x;
public:

cal(int x) : x(x){
}

friend cal operator +(cal c1,cal c2);
friend cal operator +(int m ,cal c1);


void show(){
cout<<"Value of X "<<x<<endl;
}

};

cal operator+(cal c1,cal c2){
int new_cal=c1.x+c2.x;
return cal(new_cal);
}

cal operator+(int m,cal c1){
int new_cal=m+c1.x;
return cal(new_cal);
}


int main(){


cal c1(9);
c1.show();

cal c2(10);
c2.show();

cal c3=c1+c2;
c3.show();



// left operand 
int m;
cout<<"Enter the value of M :"<<endl;
cin>>m;
cal c4=m+c3;
c4.show();

return 0;
}


     
