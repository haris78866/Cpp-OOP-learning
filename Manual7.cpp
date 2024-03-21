#include<iostream>
#include<string>
using namespace std;
// shallow and deep boht working in user defined and copy constructer
// pointr  we have to  use deep copy bcz in shallow copy does not work im shallow copy  
class  circle  {
private:
int *radius;
public:
void setRadius(int radius){
*this->radius=radius;
}

void display(){
cout<<"Radius :"<<*radius<<endl;
}

circle(){
radius=new int;
}

circle(int radiusdc){
radius=new int;
}
};


int main (){

circle c1;
c1.setRadius(4);
c1.display();


circle c2=c1;
c2.display();


return 0;
}


