#include "sdt.h"
#include <iostream>

	// this is the  educational programm

using namespace std;

int add(int a, int b)
{
    return a + b;
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

    return 0;
}
<<<<<<< HEAD
=======
 
>>>>>>> 9b325baa0a8500c707a5d473e4a6b0128130d4e7
