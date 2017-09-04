#include <iostream>
using namespace std;

int main()
{
	double a,b,c;
	cout << "Shis program sums two numbers" << endl;
	a = 0;
	b = 0;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;

	c = a + b;
	cout << "A is:" << a << endl;
	cout << "B is:" << b << endl;
	cout << "Sum is: " << c << endl;
	system("pause");

	return 0;
}