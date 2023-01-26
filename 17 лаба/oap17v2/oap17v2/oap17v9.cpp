#include <iostream>
#include <locale>

using namespace std;

//первая лаба и функции к ней
void Lab_16_1();
short& Minimum(short* Buffer);
short& Maximum(short* Buffer);

//вторая лаба и функции к ней
void Lab_16_2();


int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Count = 0;
	do {
		cout << "Выберите номер лабораторной: " << endl;
		cout << "1 - Подсчет сумм наименьших и наибольших элементов в матрице" << endl;
		cout << "2 - Подсчет самого длинного слова" << endl;
		cin >> Count;
		switch (Count) {
		case 1: Lab_16_1(); break;
		case 2: Lab_16_2(); break;
		case 3: break;
		}
	} while (Count != 3);
	return 0;
}

void Lab_16_1()
{
	short* Array = new short[16];
	short Rows = 4, Columns = 4;
	/* Заполнение*/
	srand((unsigned)time(NULL));
	cout << "Исходная матрица" << endl;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Array + i * Columns + j) = rand() % 10;
			cout << *(Array + i * Columns + j) << " ";
		}
		cout << endl;
	}
	/*Нахождение минимального и максимального*/
	short SumOfMinimum = 0, SumOfMaximum = 0;
	for (short i = 0; i < Rows; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			/*записываем в буффер элементы строки*/
			short* Buffer = new short[4];
			for (short j = 0; j < 4; j++)
			{
				*(Buffer + j) = *(Array + i * Columns + j);
			}
			/*	 с помощью функции находим минимальные*/
			SumOfMinimum += Minimum(&Buffer[0]);
			delete[] Buffer;
		}
		else
		{
			short* Buffer = new short[4];
			for (short j = 0; j < 4; j++)
			{
				*(Buffer + j) = *(Array + i * Columns + j);
			}
			SumOfMaximum += Maximum(&Buffer[0]);
			delete[] Buffer;
		}
	}
	cout << "Сумма минимальных = " << SumOfMinimum << endl;
	cout << "Сумма максимальных = " << SumOfMaximum << endl;
	delete[] Array;
}

short& Minimum(short* Buffer)
{
	short Minimum = *Buffer;
	for (short i = 1; i < 4; i++)
	{
		if (*(Buffer + i) < Minimum)
			Minimum = *(Buffer + i);
	}
	return Minimum;
}

short& Maximum(short* Buffer)
{
	short Maximum = *Buffer;
	for (short i = 1; i < 4; i++)
	{
		if (*(Buffer + i) > Maximum)
			Maximum = *(Buffer + i);
	}
	return Maximum;
}

void Lab_16_2()
{
	char* Sentence = new char[256];
	cout << "Введите предложение(предложение заканчивается точкой):";
	cin.getline(Sentence, 256, '.');
	short i = 0;
	short Length = strlen(Sentence);
	short MaxLength = 0;
	short CurrentProbel = 0, LastProbel = 0;
	while (i != Length)
	{
		if (*(Sentence + i) == ' ')
		{
			CurrentProbel = i;
			short LengthOfWord = CurrentProbel - LastProbel - 1;
			if (LengthOfWord > MaxLength)
			{
				MaxLength = LengthOfWord;
			}
			LastProbel = CurrentProbel; // первая позиция буквы след слова
		}
		if ((i + 1) == Length)
		{
			short LengthOfWord = Length - LastProbel - 1;
			if (LengthOfWord > MaxLength)
			{
				MaxLength = LengthOfWord;
			}
		}
		i++;
	}
	cout << "Максимальное кол-во букв в слове: " << MaxLength <<endl;
}