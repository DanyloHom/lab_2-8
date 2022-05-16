#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	Set a, b, c;
	cout << "Set a : " << endl;
	cin >> a;
	cout << a;
	cout << "Set b : " << endl;
	cin >> b;
	cout << b;

	cout << "Set c = Union(a, b) : " << endl;
	c = Union(a, b);
	cout << c;

	cout << "Set c = Intersection(a, b) : " << endl;
	c = Intersection(a, b);
	cout << c;

	cout << "Set c = Substraction(a, b) : " << endl;
	c = Substraction(a, b);
	cout << c;

	cout << "b++" << endl;
	b++;
	cout << b << endl;

	cout << "b--" << endl;
	b--;
	cout << b << endl;

	cout << "++b" << endl;
	++b;
	cout << b << endl;

	cout << "--b" << endl;
	--b;
	cout << b << endl;

	cout << "there is " << b.Count() << " elements in b" << endl;
	cout << "there is " << c.Count() << " elements in c" << endl;
	cout << "there is " << a.Count() << " elements in a" << endl;

	int i;
	cout << "enter position in a to include : " << endl;
	cin >> i;
	a.Include(i);
	cout << a;

	cout << "enter position in a to exclude : " << endl;
	cin >> i;
	a.Exclude(i);
	cout << a;


}