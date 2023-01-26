#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{

    float c = 2.1, m = 1, r = 4e-5, h = 0, y = 0;

    for (int j = 1; j <= 4; j++)
    {
        do
        { 
        h = ((10 * r) - j) / (pow(c, 2) + exp((-1) * m));
        y = (h * m - j * j) + (0.1 * c * 0.1 * c);
        cout << "h = " << h << endl;
        cout << "y = " << y << endl;
        m = m + 0.5;
        } while (m < 2.5);
    }

}

