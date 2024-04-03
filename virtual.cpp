#include<iostream>
#include<string>
using namespace std;

class Account{
public:
    string name;

    // Constructor 
    Account(string n) : name(n) {
    }

    virtual void display(){
        cout << "Name: " << name << endl;
    }
};

class checking : public virtual Account {
public:
    double amount;

    checking(string n, double a) : Account(n), amount(a) {
    }

    void display()  {
        Account::display();
        cout << "Amount: " << amount << endl;
    }
};

class saving : public virtual Account {
public:
    double sav;

    // Corrected the constructor initialization list
    saving(string n, double a, double s) : Account(n), amount(a), sav(s) {
    }

    void display() override {
        checking::display();
        cout << "Saving: " << sav << endl;
    }
};

class Final : public checking, public saving {
public:
    // Corrected the constructor initialization list
    Final(string n, double a, double s) : Account(n), checking(n, a), saving(n, a, s) {
    }

    void display() override {
        saving::display(); // Removed extra curly braces
    }
};

int main(){
    // Changed to create an instance of Final to demonstrate diamond inheritance
    Final finalAccount("Haris", 200, 300);
    finalAccount.display();
    return 0;
}

