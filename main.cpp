#include "sdt.h"
#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "a: " << a << endl << "b: " << b << endl;

    int c;

    c = add(a , b);

    cout << "a + b: " << c << endl;

    return 0;
}