#include<iostream>
#include<string>

using namespace std;


class shape{
public:

shape(){
}

void prirnt(){
cout<<"This is a shape :"<<endl;
}

};

class polygon : public shape {
public:

void print(){
cout<<"Polygon is a shape :"<<endl;
}
};

class rectangle {
public:


void print(){
cout<<"Recatngle is a polygon :"<<endl;
}
};

class triangle {
public :

void print(){
cout<<"Triangle is a polygon :"<<endl;
}
};


class square {
public :

void print(){
cout<<"Square is a recatangle :"<<endl;
}

};

int main(){

polygon p;

p.print();

rectangle r;
r.print();

triangle t;
t.print();

square s;
s.print();
return 0;
}




