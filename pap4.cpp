#include<iostream>
#include<string>
using namespace std;

class account{
protected:
int acc_no;

account(){
}

account(int a) : acc_no(a){
}

void display(){
cout<<"Account no :"<<acc_no<<endl;
}
};

class amount : public virtual account {
protected:
int  money;

public:

amount(int a, int m) : account(a), money(m) {
}

void display(){
account :: display();
cout<<"Money :"<<money<<endl;
}
};


class  IR : public virtual amount {
protected:
int ir;
int total;
public:

IR(int a , int m ,int i) : amount(a,m) ,ir(i){
}


void balance(){
total=money*ir/100;
}
 
void display(){
amount :: display();
cout<<"Interest Rate :"<<ir<<endl;
cout<<"Balance : "<<total<<endl;
}

};


class checking : public  amount , public IR {
public : 

void display(){
IR :: display();

}

};

int main(){

IR acc1(1234,200,5);

acc1.display();

return 0;
}

