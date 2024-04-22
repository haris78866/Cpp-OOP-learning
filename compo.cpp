#include<iostream>
#include<string>
using namespace std;

class car {
private:
    string year;
    string company;

public:
    car() {}
};

class mechanic {
private:
    string name;
    int age;

public: 
    mechanic() {}

    string getname() { return name; }
    int getage() { return age; }

    void setname(string name) { this->name = name; }
    void setage(int age) { this->age = age; }
};

class garage {
    car c;
    mechanic m;
    string garage_name;
    string location;

public:
    garage(string n, string l) : garage_name(n), location(l) {}

    void print() {
        cout << "Garage Name : " << garage_name << endl;
        cout << "Location : " << location << endl; 
        cout << "Name : " << m.getname() << endl;
        cout << "Age : " << m.getage() << endl;
    }
};

int main() {
    string name;
    int age;
    string garage_name = "kalu";
    string location = "GT";

    mechanic p;

    cout << "Enter the mechanic name :" << endl;
    cin >> name;
    p.setname(name);

    cout << "Enter the mechanic age :" << endl;
    cin >> age;
    p.setage(age);

    garage m(garage_name, location);
    m.print();

    return 0;
}

