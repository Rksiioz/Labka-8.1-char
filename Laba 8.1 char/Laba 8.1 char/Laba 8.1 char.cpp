#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

bool Find(char* s)
{
	char* p = s;

	while (*p != '\0') {
		if (
			(*p == 'n' && *(p + 1) == 'o')
			|| (*p == 'o' && *(p + 1) == 'n')
			) {
			return true;
		}
		p++;
	}
	return false;
}

char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, 'n'))
	{
		if (s[p - s + 1] == 'o')
		{
			pos2 = p - s + 2;
			strncat(t, s + pos1, pos2 - pos1 - 3);
			strcat(t, "***");
			pos1 = pos2;
		}
		else
		{
			pos2 = p - s + 1;
			strncat(t, s + pos1, pos2 - pos1);
			pos1 = pos2;
		}
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}

int main()
{
	char str[101];
	std::cout << "Enter string:" << std::endl;
	std::cin.getline(str, 100);

	std::cout << "String contains: " << std::boolalpha << Find(str) << std::endl;

	char* dest = new char[151];
	dest = Change(str);
	std::cout << "Parameter: " << str << std::endl;
	std::cout << "Result:    " << dest << std::endl;

	return 0;
}