#include<iostream>
#include<string>
using namespace std;


// class of Bank Account 
class BankAccount{
private:
int accountNumber;
string accountHolder;
double balance;
static int totalaccount;
public:

// static for checkig the how  many accounts are created   // setting the balance randomly to check 
BankAccount(string holder="N/A") : accountHolder(holder) , balance(1987){
totalaccount++; 
accountNumber=totalaccount;          
}



//  deposit function to deposit amount 
void deposit(double amount){
balance+=amount;
}

// withdraw balance 
bool  withdraw(double amount){
if(balance>=amount){
  balance-=amount;
  return true;
  }
else{
 cout<<"Not Suffucient Balance! "<<endl;
 return false;
 }
}


// getters   

// get balance
double getbalance(){
return balance;
}

// get accountnumber
int   getaccountNumber(){
return accountNumber;
}

// get totalaccount

static  int gettotalaccount(){
return totalaccount;
}

string getaccountHolder(){
return accountHolder;
}
// transfer funds 
bool tranferFund( BankAccount& from, BankAccount& to , double amount   ) {
if(from.withdraw(amount)) {
to.deposit(amount);
cout<<"Succesfull Tranction :"<<endl;
return true;
}
else{
cout<<"Un-succesfull Tranaction :"<<endl;
return false;
    }
 }
};

// static defination oustdside the class 
int BankAccount :: totalaccount=0;



// class Bank Manger
class BankManager {
private:
BankAccount  **accounts;    // aggregate the Bank Account class into Bank Manager
int capacity;
int size;

public:
BankManager(int capacity=10) : capacity(capacity), size(0) {
accounts  = new BankAccount *[capacity];
}


// destructer
int i;
~BankManager(){
for(i=0;i<size;i++){
delete[] accounts[i];
}
delete[] accounts;
}

// creating account 
void createAccount(string holder="N/A"){
if(size<capacity){
accounts[size]=new  BankAccount(holder);
size++;
cout<<"Account created successfully :"<<endl;
}
else{
cout<<"Limit exceed ! cannot create more account "<<endl;
}
}

// deleting the account 
void deleteAccount(int accountNumber){
for(int i=0;i<size;i++){
if(accounts[i]->getaccountNumber()==accountNumber){
delete accounts[i];

for(int j=i;j<size-1;j++){
accounts[j]=accounts[j+1];
}
size--;

cout<<"Account deleted Successfully :"<<endl;
}

else {
cout<<"Account not found :"<<endl;
}

  }
}

// finding the account 
BankAccount *findAccount(int accountNumber ) {
for(int i=0;i<size;i++){
 if(accounts[i]->getaccountNumber()==accountNumber){
   return accounts[i];
   }
 }
}

// display all accounts funsction 
void displayAllaccount(){
for(int i=0;i<size;i++){
cout<<"Account NUmber : "<<accounts[i]->getaccountNumber()<<endl;
cout<<"Account Holder Name :"<<accounts[i]->getaccountHolder()<<endl;
cout<<"Account Balance : "<<accounts[i]->getbalance()<<endl;

     }
  }
};



int main(){

BankManager  B;
BankAccount *account=nullptr;  // here cerating obeject of class  Bank Acount otside the switch 

int choice;
int no;
int findno;
string holdername;


do{
cout<<"***** BANK MANAGEMENT SYSTEM *****"<<endl;
cout<<"1) Create Bank Account       -> " <<endl;
cout<<"2) Delete Bank Account       ->   "<<endl;
cout<<"3) Find Bank Account         ->   "<<endl;
cout<<"4) Display  Account Detail   ->   "<<endl;
cout<<"5)  EXIT                     ->   "<<endl;
cout<<" Enter your Choice :         ->   "<<endl;
cin>>choice;

switch(choice){

case 1: 
       cout<<"Enter the Account Holder Name :"<<endl;
       cin>>holdername;
       B.createAccount(holdername);
       break;
case 2:
      cout<<"Enter the Account NUmber "<<endl;
      cin>>no;
      B.deleteAccount(no);
      break;
       
case 3:
      cout<<"Enter Account Number(to find Account)"<<endl;
      cin>>findno;
     account= B.findAccount(findno );
      if(account){
      cout<<"Account Found :"<<endl;
      cout<<"Account Holder :"<<account->getaccountHolder()<<endl;
      cout<<"Account Balance :"<<account->getbalance()<<endl;
      }
      else {
     cout<<"Account Not Found :"<<endl;
      }
      break;
case 4: 
         B.displayAllaccount();
         break;

case 5: 
      cout<<"Exiting !!"<<endl;
      break;
default:
   cout<<"Invalid choice !"<<endl;
   }
}
while(choice!=5);      
              
return 0;
}

