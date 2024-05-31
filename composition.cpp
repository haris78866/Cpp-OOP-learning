#include<iostream>
#include<string>
using namespace std;


class car {
private:
string car_name;
int model;

public: 
car(){
}


car(string name ,int model) : car_name(name) , model(model){
}


// getters 

string getcar_name(){
return car_name;
}


int getmodel(){
return model;
}

void setcar_name(string car_name){
this->car_name=car_name;
}

void setmodel(int model){
this->model=model;
}




};


class mechanic {
private:
string mechanic_name;
public: 

mechanic(string name ) : mechanic_name(name){
}


//  getters 

string getmechanic_name(){
return mechanic_name;
}


void setmechanic_name(string mechanic_name){
this->mechanic_name=mechanic_name;
}



};

class garage {
private :
string garage_name;
string garage_loc;

car c;
mechanic m;
public:


garage(string name, string loc ,car c ,mechanic m) : garage_name(name ) , garage_loc(loc) , c(c) , m(m){

}



///  getter 

string getgarage_name(){
return garage_name;
}

string getgarage_loc(){
return garage_loc;
}



void setgarage_name(string garage_name ){
this-> garage_name=garage_name;
}


void setgarage_loc(string garage_loc){
this->garage_loc=garage_loc;
}


void show(){
cout<<"Car "<<c.getcar_name()<<endl;
cout<<"Model "<<c.getmodel()<<endl;
cout<<"Mechanic Name :"<<m.getmechanic_name()<<endl;
cout<<"Garage Name :"<<garage_name<<endl;
cout<<"Garage Location : "<<garage_loc<<endl;;
}


};






int main(){

car c("Audi",2009);

mechanic m("Ali");
garage g("Kalu","GT",c,m);

g.show();



return 0;
}
