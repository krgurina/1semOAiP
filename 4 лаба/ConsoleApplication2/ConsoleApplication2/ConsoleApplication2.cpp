
#include <iostream> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("? (1-да, 2-нет)");
	std::cin >> k;
	switch (k)
	{
	case 1: { puts("Какой? (1- БГУИР, 2-БГТУ, 3-БНТУ)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("Не слабо"); break;
		case 2: puts("Хороший выбор"); //break;
		case 3: puts("Сомнительный выбор");
			break;
		}
		break;
	}
	case 2: puts("Молодец!"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}
