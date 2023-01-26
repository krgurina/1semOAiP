#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return exp(x) + x - 4;
}

double fs(double x)
{
	return exp(x) + 1;
}

double fs2(double x)
{
	return exp(x);
}

double dichotomyMethod(double(*g) (double), double a, double b, double e)
{
	while (fabs(a - b) > 2.0 * e)
	{
		double x = (a + b) / 2.0;
		if (g(x) * g(a) <= 0)
			b = x;
		else
			a = x;
	}
	return (a + b) / 2.0;
}

double tangentMethod(double(*g) (double), double(*gs) (double), double(*gs2) (double), double a, double b, double e)
{
	double x, x1;
	if (g(a) * gs2(a) > 0)
		x1 = a;
	else
		x1 = b;
	x = x1;
	do
	{
		x = x1;
		x1 = x - (g(x) / gs(x));
	} while (fabs(x1 - x) > e);
	return x1;
}

void wmain()

{
	setlocale(LC_CTYPE, "Russian");
	double a, b, e;
	wchar_t file = L"Привет";
	cout << "Введите левую границу интервала (a) "; cin >> a;
	cout << "Введите правую границу интервала (b) "; cin >> b;
	cout << "Введите точность решения (e) "; cin >> e;

	cout << "Корень решения методом дихотомии:" << dichotomyMethod(&f, a, b, e) << endl;
	cout << "Корень решения методом касательных:" << tangentMethod(&f, &fs, &fs2, a, b, e) << endl;

}