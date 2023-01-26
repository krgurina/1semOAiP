#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;
int main()
{
    float a = 1.774, m = 5, y, z, x;
    for (x=3; x<=5; x=x+0.2)
    {
        y = sqrt(a + m * m * x * x) / (a + x) * m;
        if (abs(y) < 1)
            z = y + 1;
        else z = sin(y) * sin(y);
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        
    }
    
        
    

}

