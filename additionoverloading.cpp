#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    Number operator+(Number n)
    {
        Number temp(0);
        temp.x = x + n.x;
        return temp;
    }

    void display()
    {
        cout << "Number = " << x << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}
