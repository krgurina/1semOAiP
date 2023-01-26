#include <iostream>

using namespace std;

int findMin(int** A, int row, int col)

{

	for (int j = 0; j < col; j++)

	{

		int negativeNum = 0;

		for (int i = 0; i < row; i++)

		{

			if (*(*(A + i) + j) < 0)

				negativeNum = negativeNum + 1;

		}

		if (negativeNum == row)

			return j;

	}

	return -1;

}

int getAverage(int** A, int row, int nn)

{

	int sum = 0;

	for (int i = 0; i < row; i++)

		sum = sum + *(*(A + i) + nn);

	return sum / row;

}

void deduct(int** A, int row, int col, int* nc)

{

	for (int j = 0; j < col; j++)

		for (int i = 0; i < row; i++)

			*(*(A + i) + j) = *(*(A + i) + j) - *nc;

}

void main()

{

	setlocale(LC_CTYPE, "Rus");

	int** A, row, col, i, j;

	cout << "Введите число строк матрицы "; cin >> row;

	cout << "Введите чиcло столбцов "; cin >> col;

	A = new int* [row];

	for (int i = 0; i < row; i++)

		A[i] = new int[col];

	for (i = 0; i < row; i++)

		for (j = 0; j < col; j++)

		{

			cout << "Введите A[" << i << "],[" << j << "]= ";

			cin >> *(*(A + i) + j);

		}

	int negCol = findMin(A, row, col);

	if (negCol >= 0)

	{

		cout << "Индекс отрицательного столбца: " << negCol << endl;

		int average = getAverage(A, row, negCol);

		cout << "Среднее арифметическое: " << average << endl;

		deduct(A, row, col, &average);

	}

	cout << "Результирующая матрица:" << endl;

	for (int i = 0; i < row; i++)

	{

		cout << endl;

		for (int j = 0; j < col; j++)

			cout << "A[" << i << "," << j << "] =" << *(*(A + i) + j) << "\t";

	}

	for (int k = 0; k < row; k++)

		delete A[k];

	delete[] A;

	
}