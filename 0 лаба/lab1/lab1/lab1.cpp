#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    float a, b, c, d, x;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    d = a * b * c;
    if (a != 0 && b != 0 && c != 0)
        x = pow(d, 0.33);
    else 
        x = (a + b + c) / 3;
    cout << "x = " << x;

    return 0;

}
