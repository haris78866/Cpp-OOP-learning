#include<iostream>
#include<string>
using namespace std;

// bank class 
class bankAccount{
protected:
int balance;
int annual_interest_rate;
int deposit_amount;
int withdrawl_amount;
int no_deposit;
int no_withdrawls;
int service_charges;

public:

// default constructer
bankAccount(){
}

// parameterized constructer
bankAccount(int balance,int annual_interest_rate) : balance(balance), annual_interest_rate(annual_interest_rate) {
}



// getters 

int getbalance(){
return balance;
}


int getannual_interest_rate(){
return annual_interest_rate;
}


// setters 
void setbalance(int balance){
this->balance=balance;
}



void setannual_interest_rate(int annual_interest_rate){
this->annual_interest_rate=annual_interest_rate;
}



// deposit function 
virtual void deposit(int deposit_amount){
 balance+=deposit_amount;    // adding the deposit amount into the avalible balance
no_deposit++;           // incremet the no of depsoit while user add amount 
}


//  withdrawl function 
virtual void withdraw(int   withdrawl_amount){
balance-=withdrawl_amount;   // wihdraw amount from the current balance 
no_withdrawls++;            // incrementing the no of wothdrawl 
}


// calInt function 
virtual void calInt(){
int mon_interest_rate=(annual_interest_rate/12);
int mon_interest=balance*mon_interest_rate;
balance+=mon_interest;
}


// mouthly function 
virtual void monthlyproc(){
no_deposit=0;
no_withdrawls=0;
service_charges=0;
calInt();
}

// just here making the display function for checking 
void show(){
cout<<"Current Balance "<<balance<<endl;
}


};



// now sacving class 

class saving : public  bankAccount {



public:

void status(){

if(balance<25){
cout<<"Your account is inactive!! no more withdrawls :"<<endl;
}
else{
cout<<"Your accunt is active :"<<endl;
}

}



 // withdrawl fucntion 
void withdraw(int   withdrawl_amount){
if(balance<25){
cout<<"Your account is un active : Add amont :"<<endl;
deposit(deposit_amount);
}
}


// deposit function 
void deposit(int deposit_amount){
if(balance>25){
cout<<"Your account is active :"<<endl; 
}
else{
cout<<"Not active :"<<endl;
}
}



// monthlyproc funtion 
void monthlyproc(){
// checking the no of withdrawls
if(no_withdrawls>4){
service_charges++;  // incremet the service to 1

balance-=service_charges;
}

}


void show(){
bankAccount ::  show();
}


};


// class ended here 




int main(){


// just for the trial purpose 

bankAccount  *b1=new bankAccount(1000,30);



b1->show(); 

// here depsoit the amount 
b1->deposit(20);


b1->show(); 
// here calling the withdraw function 
b1->withdraw(10);


b1->show();


// naother class 
saving    s1;
s1.deposit(20);


// here we can check the functionality acording to our programmm


delete b1;


return 0;
}

