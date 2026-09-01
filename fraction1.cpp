#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    void get()
    {
        cin >> num >> den;
    }

    Fraction add(Fraction f)
    {
        Fraction r;
        r.num = num * f.den + f.num * den;
        r.den = den * f.den;
        return r;
    }

    Fraction subtract(Fraction f)
    {
        Fraction r;
        r.num = num * f.den - f.num * den;
        r.den = den * f.den;
        return r;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, diff;

    cout << "Enter first fraction: ";
    f1.get();

    cout << "Enter second fraction: ";
    f2.get();

    sum = f1.add(f2);
    diff = f1.subtract(f2);

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();
    return 0;
}