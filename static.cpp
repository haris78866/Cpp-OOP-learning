#include<iostream>
#include<string>
using namespace std;


/*
class emp{
private:
string name;
static int count;

public:

emp(string name):name(name){
count++;
}


static int getcount(){
return count;
}


void print(){
cout<<"Name  : "<<name<<endl;
}


};

int emp :: count=0;


int main(){


emp e("Haris");
emp e1("Ali ");
emp e2("Ali ");
emp e3("Ali ");
emp e4("Ali ");
emp e5("Ali ");
emp e6("Ali ");

e.print();
e1.print();

cout<<"Total object : "<<emp  ::getcount()<<endl;







return 0;
}



// 

class test {
private:
int wid;
int len;
static int count;

public:

test(int len ,int wid)  : len(len) , wid(wid){
count++;
}

~test(){
count--;
}


int getlen(){
return len;
}

int getwid(){
return wid;
}


void setlen(int len){
this->len=len;
}

void setwid(int wid){
this->wid=wid;
}

static int getcount(){
return count;
}

int area(){
return len+wid;
}

int width(){
return len*wid;
}

void print(){
cout<<"Area "<<area()<<endl;
cout<<"Width "<<width()<<endl;
}

};

int test :: count=0;



int main()

{
test t1(5,5);

t1.print();
cout<<"COunt :"<<test :: getcount()<<endl;

test t2(5,5);

t1.print();
cout<<"COunt :"<<test :: getcount()<<endl;


return 0;
}


*/



class animal {
private:
string name;
static int count;

public:

animal(string name) : name(name){
count++;
}

~animal(){
count--;
}

static int getcount(){
return count;
}


string  getname(){
return name;
}




};


int animal :: count=0;


int main(){
animal *lion=new animal("Sheery ");
animal *cat=new animal("meow");

 
cout<<"Lion Name :"<<lion->getname()<<endl;
cout<<"Cat Name :"<<cat->getname()<<endl;
cout<<"Total  :"<<animal :: getcount()  <<endl;


delete lion;
delete cat;


cout<<"Total  :"<<animal :: getcount() <<endl;




return 0;
}





