#include <iomanip>
#include <iostream>
using namespace std;
void main()

{
	int const n = 5;
	double sum = 0, d = 12.5e-4, a, h;
	for (int i = 1; i <= n; i++)
	{
		cout << "a = ";
		cin >> a;
		sum += a * a;
	}

	h = d + sum;
	cout << "h = " << h;

}