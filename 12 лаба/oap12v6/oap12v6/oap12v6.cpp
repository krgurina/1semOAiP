#include <iostream>
#include <iomanip>
using namespace std;


	int main()
	{
		setlocale(LC_ALL, "Russian");
		const int size = 100;
		int k, f, n, A[size];
		srand((unsigned)time(NULL));
		cout << "Введите число k: "; cin >> k;
		cout << "Введите размер массива:"; cin >> n;
		for (f = 0; f < n; f++)
		{

			A[f] = rand() % 7;
			cout << A[f] << " ";
		}
		for (f = 0; f < n; f++)
		{
			if (k == A[f])
			{
				A[f] = *(A + f);
				cout << "Номер элемента: " << * (A + f) << endl;
			}
		}


	}