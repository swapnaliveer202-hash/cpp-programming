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

    void operator++()
    {
        x++;
    }

    void display()
    {
        cout << "Number = " << x << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Before Increment: ";
    n.display();

    ++n;

    cout << "After Increment: ";
    n.display();

    return 0;
}
