
#include <ctime>
#include <iostream>
using namespace std;

void task1_3()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	float* A, mult = 1, sum = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 50;
		cout << A[i] << endl;
		if (A[i] < 0)
		{
			mult *= A[i];
		}
		if (A[i] > 0)
		{
			sum += A[i];
		}
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << mult << endl;
	delete[] A;
}

void task2_3() //Найти сумму наименьших элементов ее нечетных строк и наибольших элементов ее четных строк.
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int i = 0, j = 0, ** A, sz = 4, min = 100, max = 0, sMin = 0, sMax = 0;
	A = new int* [sz];
	for (i = 0; i < 4; i++)
	{
		A[i] = new int[sz];
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 99;
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}

	for (i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 1)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 0;
		}

		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 3)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 100;
		}
	}
	cout << "Сумма минимальных элементов нечётных строк: " << sMin << endl;
	cout << "Сумма максимальных элементов чётных строк: " << sMax << endl;
	delete[] A;
}

void task1_6()
{
	// В одномерном массиве, состоящем из n вещественных элементов, вычислить номер минимального по 
	// модулю элемента массива и сумму модулей элементов массива, расположенных после первого отрицательного эле-мента.
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0, number = 0, k = 0;
	float* A, min = 100, sum = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 30;
		cout << A[i] << endl;
		if (abs(A[i]) < min) //номер минимального по модулю элемента массива
		{
			min = A[i];
			number = i;
		}
	}
	for (i = 0; i < size; i++) //первый отрицательный элемент
	{
		if (A[i] < 0)
		{
			k = i;
			break;
		}
	}
	for (int j = k + 1; j < size; j++) //сумма модулей
	{
		sum += abs(A[j]);
	}
	cout << "Минимальный по модулю элемент массива A[" << number << "] = " << min << " = |" << abs(min) << "|" << endl;
	cout << "Сумма модулей после первого отрицательного элемента: " << sum << endl;
	delete[] A;
}

void task2_6()
{
	// Дана целочисленная квадратная матрица. Определить произведение элементов в тех строках, которые не 
	// содержат отрицательных элементов и максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы.
	int i = 0, j = 0, pr = 1, mult = 1, counter = 0, number = 0, sd = 0;
	int const sz = 5;
	int	A[sz][sz] = { {3,-4,5,2,-8},{8,5,2,4,6},{9,3,-1,7,11},{4,6,1,9,7},{1,4,-2,9,10} };
	for (i = 0; i < sz; i++) //вывод матрицы
	{
		for (j = 0; j < sz; j++)
		{
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}
	// 1. Определить произведение элементов в тех строках, которые не содержат отрицательных элементов
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			if (A[i][j] > 0) //считаем кол-во положительных элементов и сразу перемножаем их
			{
				++counter;
				pr *= A[i][j];
			}
		}
		if (counter == 5) //если 5 элементов положительные, то запоминаем их произведение и номер положительной строки
		{
			mult = pr;
			number = ++i;
			counter = 0;
			pr = 1;
		}
		else //иначе сбрасываем произведение и счетчик и начинаем поиск заново
		{
			pr = 1;
			counter = 0;
		}
		if (number != 0) cout << "Произведение элементов " << number << "-й строки: " << mult << endl; //если строка ненулевая, то выводим её
	}
	// 2. Найти максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы
	int k, max = 0;
	for (k = 1; k <= 3; k++) //находим суммы выше главной диагонали
	{
		for (i = 0; i < sz; i++)
		{
			for (j = k; j < sz; j++)
			{
				if ((j - i) == k)
					sd += A[i][j];
			}
		}
		cout << "Сумма диагонали №" << k << ": " << sd << endl;
		if (sd > max)
			max = sd;
		sd = 0;
	}
	int l = 1;
	for (l = 1; l <= 3; l++) //находим суммы ниже главной диагонали
	{
		for (i = l; i < sz; i++)
		{
			for (j = 0; j < sz; j++)
			{
				if ((i - j) == l)
					sd += A[i][j];
			}
		}
		cout << "Сумма диагонали №" << k + l - 1 << ": " << sd << endl;
		if (sd > max)
			max = sd;
		sd = 0;
	}
	cout << "Максимальная сумма диагонали равна: " << max << endl;
	delete[] A;
}


void var3()
{
	int c;
	do
	{
		cout << "Введите число:\n1 - работа с массивом;\n2 - работа с матрицей;\n3 - выход из программы.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_3(); break;
		case 2: task2_3(); break;
		case 3: break;
		}
	} while (c != 3);
}

void var6()
{
	int c;
	do
	{
		cout << "Введите число:\n1 - работа с массивом;\n2 - работа с матрицей;\n3 - выход из программы.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_6(); break;
		case 2: task2_6(); break;
		case 3: break;
		}
	} while (c != 3);
}



int main()
{
	setlocale(LC_ALL, "ru");
	int c;
	do
	{
		cout << "Введите число:\n1 - основное задание  (3 вариант);\n2 - дополнительное №2 (6 вариант);\n3 - выход из программы.\n";
		cin >> c;
		switch (c)
		{
		case 1: var3(); break;
		case 2: var6(); break;
		
		}
	} while (c != 3);
}