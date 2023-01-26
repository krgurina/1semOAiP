#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    float h, y, c = 2.1, m = 7, r = 4e-5, j = 0;
    do
    {
        h = (10 * r - j) / (pow(c, 2) + exp(-m));
        y = (h * m - j * j) + 0.1 * c * 0.1 * c;
        cout << "h = " << h << endl;
        cout << "y = " << y << endl;
        j = j + 0.1;
    } while (j < 1.8);
}
