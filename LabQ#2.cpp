#include<iostream>

using namespace std;

class complex {
private:
    float real;
    float imaginary;

public:
    // Default constructor
    complex() {
        // Initialize real and imaginary to 0 in the default constructor
        real=0.0;
        imaginary=0.0;
    }

    // Getter for real no
    float getreal() {
        return real;
    }

    // Getter for imaginary  no
        float getimaginary() {
        return imaginary;
    }

    // Function to set the real and imaginary parts
    void set(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Function for display
    void display() {
        cout << "Complex no: "<<real<<" + "<<imaginary<<"i"<< endl;
    }

    // Function to sum two complex numbers and return a complex number
    complex sum(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main() {
    complex c1,c2,c3;

    c1.set(1.0, 3.0);
    c2.set(2.0, 9.0);

    c3=c1.sum(c2);

    // Showing all the complex numbers
    cout <<"Complex numbers:"<< endl;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}

