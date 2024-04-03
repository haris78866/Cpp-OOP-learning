#include<iostream>
#include<string>
using namespace std;

// Protected data member is accessible in the inherited class  
// but private is accessible in the same class, not outside the class 

class bankaccount {
protected:
    int accountno;
    double balance;
public:
    // Constructor
    bankaccount(): accountno(0), balance(0) {
    }

    // Getters 
    int getaccountno() {
        return accountno;
    }

    double getbalance() {
        return balance;
    }

    void setaccountno(int accountno) {
        this->accountno = accountno;
    }

    void setbalance(double balance) {
        this->balance = balance;
    }

    void deposit() {
        int amount;
        cout << "Enter the amount you want to add:" << endl;
        cin >> amount;

        balance+=amount;
    }

    void withdraw() {
        double cut;
        cout<<"Enter the balance to withdraw:" << endl;
        cin>>cut;

        balance-=cut;
    }

     void display() {
        cout << "Account information:" << endl;
        cout << "Account no: " << accountno << endl;
        cout << "Balance: : 100.1 " << endl;
    }
};

class savingAccount : public bankaccount {
private:
    int interest_rate=0;
public:
    savingAccount() : bankaccount(), interest_rate(0) {
    }

    void interest() {
        cout<<"Enter the interest rate:" << endl;
        cin>>interest_rate;
    }

    int retrieve_IR() {
        return interest_rate;
    }

    void post(){
        balance +=(balance*interest_rate)/100; 
    }

    
    void withdraw()  {
        double cut;
        cout << "Enter the balance to withdraw:" << endl;
        cin >> cut;

        balance -= cut;
    }

    void display()  {
        bankaccount::display();
        cout <<"Interest Rate: "<<interest_rate<<"%"<<endl;
        //cout<<"Balance: "<<balance<<endl;
    }
};

int main() {
    savingAccount acc1;
    acc1.setaccountno(3424);
    acc1.setbalance(2390);
    acc1.deposit();
    acc1.withdraw();
    acc1.interest();
    acc1.post();
    acc1.display();
    

    return 0;
}

