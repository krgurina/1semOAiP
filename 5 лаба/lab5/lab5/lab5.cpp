#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{
    
    float c = 2.1, m = 7, r = 4e-5, h = 0, y = 0;
    
    for (float j = 4.2; j > 1.7; j -= 0.3)
    {
        h = ((10 * r) - j) / (pow(c, 2) + exp((-1)*m));
        y = (h * m - j * j) + (0.1 * c * 0.1 * c);
        cout << "h = " << h << endl;
        cout << "y = " << y << endl;
    }

}

