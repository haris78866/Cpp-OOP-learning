#include<iostream>
#include<string>
using namespace std;

class Complex{
    friend Complex operator+(const Complex x1, const Complex x2);
private:
    int real;
    int imagery;
public: 
    Complex(int r,int y) :real(r),imagery(y) {}

    void print(){
        cout<<"Real:"<<real<<"Imagery:"<<imagery<<"i"<<endl;
    }
};

// Friend function definition
Complex operator+(const Complex x1, const Complex x2) {
    int new_real=x1.real+x2.real;
    int new_imagery=x1.imagery+x2.imagery;
    return Complex(new_real,new_imagery);
}

int main() {
    Complex c1(10,10);
    c1.print();

    Complex c2(20,20);
    c2.print();

    Complex c3=c1+c2;
    c3.print();

    return 0;
}

