#include<iostream>
#include<string>
using namespace std;

class opt{
private:
int x;
int y;

public:
opt(int x,int y): x(x),y(y){
}


int getx(){
return x;
}

int gety(){
return y;
}


void setx(int x){
this->x=x;
}


void sety(int y){
this->y=y;
}

friend ostream&  operator << (ostream& out, opt ob );
friend istream& operator >> (istream & in, opt ob);

};

ostream& operator<< (ostream& out,opt ob){
out<<"Value of X :"<<ob.getx()<<endl;
out<<"Value of Y :"<<ob.gety()<<endl;
return out;
}


istream& operator >> (istream& in,opt ob){
cout<<"X"<<endl;
in>>ob.x;

cout<<"Y"<<endl;
in>>ob.y;

return in;
}

int main(){
opt p1(0,0);


cin>>p1;
cout<<p1;


return 0;
}

