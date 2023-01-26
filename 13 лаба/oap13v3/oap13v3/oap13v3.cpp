#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;


//Variant 3. В строке есть два символа *. Получить все символы между первым и вторым символом *. 

void main()
{
	char str[50];
	int i, iLast, iFirst, j;
	cout << "Enter string: ";
	cin >> str;

	for (i = strlen(str); i >= 0; i--)
	{
		if (str[i] == '*') break;
	}
	iLast = i;

	for (j = (iLast - 1); j >= 0; j--)
	{
		if (str[j] == '*') break;
	}
	iFirst = j;

	char s[20];
	strncpy_s(s, &str[iFirst + 1], iLast - iFirst - 1);
	s[iLast - iFirst - 1] = 0;
	cout << "String between '*': " << s;
}
