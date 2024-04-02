#include<iostream>
#include<string>
using namespace std;

class box {
private:
int len;
static int total;
public :

// default constructer
box(){
}

// paramertized constructer
box(int len){
this->len=len;
total++;
}

int  area(){
return len*len;
}


int wid(){
return len+len;
}

static int get_total(){
return total;
}

void display(){
cout<<"Len :"<<len<<endl;
cout<<"Area :"<<area()<<endl;
cout<<"Width :"<<wid()<<endl;
cout<<"Total :"<<total<<endl;
}

};

int box :: total =0;

int main()
{

box b1(3);
box b2(4);

b1.display();

return 0;
}
