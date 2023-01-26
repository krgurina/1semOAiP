#include <iostream>

#include <stdio.h>

#include <cstring>

#include <string>

#include <string.h>

using namespace std;

void main()

{

	char s[256];

	int i, count, k;

	puts("Enter string: ");

	gets_s(s);

	int len2 = strlen(s);

	for (int i = 0; i < len2; i++)

	{

		if (s[i] == 'b') {

			k = i;

			for (long i = k; i < len2; ++i)

			{

				s[i] = s[i + 1];

			}

			len2--;

		}

	}

	cout << s;

}