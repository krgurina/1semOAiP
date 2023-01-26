// lab11v12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int A;
    char tA[33];
    cout << "Введите число: ";
    cin >> A;
    _itoa_s(A, tA, 2);;
    cout << "Число в двоичной системе:  " << tA << endl;
    if ((A & 3) == 0)
        cout << "Число кратно 4 ";
    else cout << "Число не кратно 4 ";
}

