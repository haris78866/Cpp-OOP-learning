#include<iostream>
#include<string>
using namespace std;

class box{
private:
int len;
int wid;
static int total;
public:

// default constructer
box(){
}

// apramterized constructer 
box(int len, int wid){
this->len=len;
this->wid=wid;
total++;
}

~box(){
total--;
}
// getter 
int getlen(){
return len;
}

int getwid(){
return wid;
}

//  setter 
void setlen(int len){
this->len=len;
}

void setwid(int wid){
this->wid=wid;
}



void display();
};

int box :: total=0;

void box :: display(){
cout<<"Length : "<<len<<endl;
cout<<"Width  : "<<wid<<endl;
cout<<"Total  : "<<total<<endl;
}

int main(){

box  b1(12,13);
box  b2(23,34);


b1.display();


return 0;
}

