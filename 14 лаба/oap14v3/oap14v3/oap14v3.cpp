#include <iostream>
#include <ctime>
#include <iomanip> 
using namespace std;

void Check(int row, int ctr) {
	int A[5][5] = { 1,2,3,4,5,
				2,1,0,8,1,
				3,0,0,9,0,
				4,8,9,3,7,
				5,0,1,7,0 };
	int j = 0;
	for (int i = row, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			ctr++;
		}
	}
	if (ctr == 6) cout << row << "-ая строка совпадает с " << row << "-ым столбцом.\n";
}



//Вариант 3. Для заданной целочисленной матрицы A(N, M) определить, является ли сумма её элементов чётным числом.

int main()
{
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));
	int** A, n, m, sum = 0;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите m: ";
	cin >> m;
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 99;
			cout << "A[" << i << "," << j << "] = " << A[i][j] << endl;
			sum += A[i][j];
		}
	}
	if (sum % 2 == 0) cout << "Сумма элементов sum = " << sum << " — чётное число.";
	else cout << "Сумма элементов sum = " << sum << " — нечётное число.";
}


