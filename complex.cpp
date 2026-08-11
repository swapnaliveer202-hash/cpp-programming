#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}
    
