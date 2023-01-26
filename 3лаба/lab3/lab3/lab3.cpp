#include <iostream>

#include <iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	
	cout << "Введите символ "; cin >> c;
	cout << endl;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	int s, n;
	cout << "Введите число, равное отношению высоты прямоугольника к его основанию "; cin >> n;
	s = 2 * (n + 1);
	cout << "Площадь прямоугольника " << s << endl;
}