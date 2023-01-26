#include <iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RUS");
	
	float a = 1, b = 6, n = 200, h, s, x;
	h = (b - a) / n;
	x = a;
	s = 0;
	while (x < (b - h))
	 {
		
		s = s + h * ((1 + pow(x, 3)) + (1 + pow(x + h, 3)))/2;
		x = x + h;
		
	}
	cout << "Метод трапеций: " << s << endl;

	float s1, s2, i, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;



	while (i<n) {
		s2 = s2 + (1 + pow(x, 3));
		x = x + h;
		s1 = s1 + (1 + pow(x, 3));
		x = x + h;
		i = i + 1;
		
	}
	z = (h / 3) * (1 + pow(a, 3)) + 4 * ((1 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
		

	
	cout << "Метод парабол: " << z << endl;


}
