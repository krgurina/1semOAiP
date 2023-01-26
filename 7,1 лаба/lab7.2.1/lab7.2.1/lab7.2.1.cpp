#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int r1, r2, r3;
    for (int i = 100; i < 1000; i++) {
        r1 = i / 100;
        r2 = (i - (r1 * 100)) / 10;
        r3 = (i - (r1 * 100) - (r2 * 10));
        if (r1 != r2 && r1 != r3 && r2 != r3)
            cout << endl << i;
    }
    return 0;
}