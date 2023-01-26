#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, sz, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << " ";
	}
	double o;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		o = A[i] % 7;
		if (o == 0)
		{
			for (int j = i; j <= sz; j++)
				A[j] = A[j + 1]; sz--;
		}
	}
	cout << endl << endl << endl;
	cout << "Массив после удаления элементов" << endl;

	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl << endl << endl;


	i = 0;
	while (i < sz)
	{
		if (A[i] % 2 == 1)
		{
			for (j = sz; j > i; j--)
				A[j] = A[j - 1];
			sz++;
			A[i + 1] = 4;
		}
		i++;
	}

	cout << "Массив после добавления элемента со значением 4 после каждого нечетного элемента: " << endl;
	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl << endl << endl;

}