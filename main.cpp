#include "sdt.h"
#include <iostream>

	// this is the  educational programm

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int power(int a, int b)
{
	for (int i = 1; i < b; i++)
	{
		a = a * a;
	}

	return a;
}

int diff(int a, int b)
{
	return a - b;
}

int main()
{
    int a, b;

    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "a: " << a << endl << "b: " << b << endl;

    int c, d;

    c = add(a , b);

	d = diff(a, b);

    cout << "a + b: " << c << endl;

	cout << "a - b: " << d << endl;

	int f;

	f = power(a, b);

	cout << "a in power of b: " << f << endl;
    return 0;
}
