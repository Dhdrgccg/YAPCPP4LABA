#include <iostream>
#include "no1.h"
#include "no2.h"

using namespace std;

int main()
{
	std::setlocale(LC_ALL, "Russian");
	std::wcout.imbue(std::locale("ru_RU.UTF-8"));

	int Choise;
	cout << "������� ����� �������:";
	while (!(std::cin >> Choise)) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "������. ��������� ����: ";
	}
	if (Choise == 1) {
		No1();
	}
	else if (Choise == 2)
	{
		No2();
	}
	else
	{
		std::cout << "������ ������ ���";
	}

	return 0;
}
