#include <iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float a=5, b=11, n = 200, h, s = 0, x;
	h = (b - a) / n;
	x = a;
	while (x < (b - h))

	{
		s = s + h * (exp(x) + 2 + exp(x + h) + 2) / 2;
		x = x + h;

	}
	cout << "Метод трапеций:  " << s << endl;



	float  s1 = 0, s2 = 0, i = 1, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n)

	{
		s1 = s1 + (exp(x) + 2);
		x = x + h;
		s2 = s2 + (exp(x) + 2);
		x = x + h;
		i = i + 1;

	}

	z = h / 3 * (exp(a) + 2 + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + exp(b) + 2);
	cout << "Метод парабол: " << z << endl;



	float  e= 0.0001, f1, f2;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		f1 = exp(x) + x - 4;
		f2 = exp(a) + a - 4;
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}

	cout << "x = " << x << endl;

}



