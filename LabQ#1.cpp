#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
    }

    // Parameterized constructor
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }

    // Getter for length
    float getlength() {
        return length;
    }

    // Getter for width
    float getwidth() {
        return width;
    }

    // Setter for length
    void setlength(float length) {
        this->length = length;
    }

    // Setter for width
    void setwidth(float width) {
        this->width = width;
    }

    float perimeter() {
        return 2*(length+width);
    }

    float area() {
        return length*width;
    }

    void show() {
        cout<< "Length: "<<length<<endl;
        cout<< "Width:  "<<width<<endl;
    }
};

int main() {
    Rectangle rect1, rect2;

    // For rectangle 1
    rect1.setlength(5);
    rect1.setwidth(2.5);

    // For rectangle 2
    rect2.setlength(5);
    rect2.setwidth(18.9);

    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout<<"Area: "<<rect1.area()<<" Perimeter: "<<rect1.perimeter()<<endl;

    cout<<"\nRectangle 2:"<< endl;
    rect2.show();
    cout << "Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << endl;

    // Set length for rectangle 1 again
    rect1.setlength(15);

    // Display again the perimeter and the area for rectangle 1
    cout<<"\nRectangle 1:"<<endl;
    rect1.show();
    cout<<"Area: "<<rect1.area()<<", Perimeter: "<<rect1.perimeter()<< endl;

    // Set width for rectangle 2 again
    rect2.setwidth(6.3);

    // Display again the perimeter and the area for rectangle 2
    cout<<"\nRectangle 2:"<<endl;
    rect2.show();
    cout<<"Area: " <<rect2.area()<<", Perimeter: "<<rect2.perimeter()<<endl;
    
 // checking the condition of same area or not    
  if(rect1.area()==rect2.area()){
  cout<<"They  have the same area :"<<endl;
     return 1;
     }
   else {
   cout<<"Dont have the same area :"<<endl;
   return 0;
   }
   
   
 return 0;  
}
   
   
   
  
 
