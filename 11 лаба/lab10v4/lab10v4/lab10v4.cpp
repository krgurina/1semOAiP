﻿#include <iostream>
using namespace std;

void main()
{
	// Используя битовые операции проверить, кратно ли четырем число А
	setlocale(LC_ALL, "Russian");
	int A; char tmp[33];
	cout << "Введите число: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде: " << tmp << endl;
	if ((A & 3) == 0)
		cout << "Число кратно 4." << endl;
	else
		cout << "Число не кратно 4." << endl;

	//2 Установить в 1 в числе А n битов влево от позиции p

	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];
	cout << "Введите число a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Число в двоичном виде : " << tA << endl;
	cout << "Введите c какого бита начинать замену: ";
	cin >> p;
	cout << "Скольно битов заменяем на 1: ";
	cin >> n;
	
	mask = (1u << n) - 1;
	mask <<= p;
	_itoa_s(mask, tM, 2);
	cout << "Mask: " << tM;
	a |= mask;
	_itoa_s(a, tA, 2);
	cout << "\nChanged a: " << tA;
}