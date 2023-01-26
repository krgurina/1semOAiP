#include <iostream>

#include <time.h>

void main()

{

	setlocale(LC_CTYPE, "Russian");

	const int N = 100; float A[N], B[N], C[N];

	int mn = 0, mx = 99;

	int i, sz, nsz = 3; float sum = 0, k;

	std::cout << "Введите размер массива ";

	std::cin >> sz;

	std::cout << "Массив А:" << std::endl;

	srand((unsigned)time(NULL));

	for (i = 0; i < sz; i++)

	{

		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);

		std::cout << A[i] << std::endl;

	}

	std::cout << std::endl;

	for (i = 1; i < sz; i++)

	{

		if (A[i] < A[mn])

			mn = i;

	}

	std::cout << "Минимальный элемент " << A[mn] << std::endl;

	std::cout << std::endl;

	for (i = mn; i < sz; i++)

		A[i] = A[i + 1];

	--sz;

	for (i = 0; i < sz; i++)

	{

		sum += A[i];

		k = sum / sz;

	}

	std::cout << "Среднее арифметическое " << k << std::endl;

	std::cout << std::endl;

	for (i = 0; i < nsz; i++)

	{

		B[i] = k;

	}

	for (int i = 0; i < nsz; i++)

	{

		C[i] = B[i];

	}

	for (int i = nsz; i < sz + nsz; i++)

	{

		C[i] = A[i - nsz];

	}

	std::cout << "Новый массив A:" << std::endl;

	for (i = 0; i < sz + nsz; i++)

		std::cout << C[i] << std::endl;

}