#include "Counter.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	int nume = -999;
	string op_ch, selection;

	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	cin >> op_ch;

	if (op_ch == "yes")
	{
		cout << "Введите начальное значение счётчика: ";
		cin >> nume;
	}
	else if (op_ch == "no")
	{
		nume = 1;
	}

	Counter coun(nume);

	do
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> selection;

		if (selection == "+")
		{
			coun.increment();
		}
		else if (selection == "-")
		{
			coun.decrement();
		}
		else if (selection == "=")
		{
			cout << coun.getValue() << endl;
		}
		else if (selection == "x")
		{
			cout << "До свидания" << endl;
		}
		else
		{
			cout << "Не известная команда" << endl;
		}
	} while (selection != "x");
}
