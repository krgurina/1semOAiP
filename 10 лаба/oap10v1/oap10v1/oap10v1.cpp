#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	const int N = 100;
	int i, j = 0, sz, k, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
	cout << "Введите номер элемента ";
	cin >> k;
	for (i = k; i <= sz; i++)
		A[i] = A[i + 1];
	sz--;

	cout << "Массив А с удалённым элементом:" << endl;

	for (i = 0; i < sz; i++)
		cout << A[i] << endl;

	cout << "Добавляем после каждого четного элемента массива элемент со значением 0:\n" << endl;

	i = 0;
	while (i < sz)
	{
		if (A[i] % 2 == 0)
		{
			for (j = sz; j > i; j--)
				A[j] = A[j - 1];
			sz++;
			A[i + 1] = 0;
		}
		i++;
	}

	cout << "Массив после добавления элемента со значением 0 после каждого четного элемента: " << endl;
	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


}
