#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point a(1.0f, 2.0f);
	cout << "point a : \n" << a;
	Point b(3.0f, 4.0f);
	cout << "point b : \n" << b;
	Point c;
	cout << "point c : \n\n" << c;


	cout << c[55] << endl;

	cout << "\nAffectation valeurs du point c ! \n";
	cin >> c;

	cout << "\nComparaison avec le point a ! \n";
	if (a == c)
		cout << "a et b sont egaux\n";

	if (a != c)
		cout << "a et b sont differents\n";

	c = a;
	cout << c; // c = 1 / 2

	c = a + b;
	cout << c; // c = 4 / 6

	c = b - a;
	cout << c; // c = 2 / 2

	c = a * b;
	cout << c; // c = 3 / 8

	c = b / a;
	cout << c; // c = 3 / 2

	c += a;
	cout << c; // c = 4 / 4

	c -= a;
	cout << c; // c = 3 / 2

	c *= a;
	cout << c; // c = 3 / 4

	c /= a;
	cout << c; // c = 3 / 2

	system("Pause");

	return 0;
}