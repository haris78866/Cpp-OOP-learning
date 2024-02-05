#include<iostream>

using namespace std;

class Rectangle 
{
  private:
    int length;
    int width;
       
  public:
    void set_dimensions(int l, int w)
    {
       length = l;
       width = w;
    }
      
  
};

double Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    Rectangle rectangle1;
    rectangle1.set_dimensions(4, 4);
    
    cout << "Perimeter: " << rectangle1.perimeter() << endl;

    return 0;
}

