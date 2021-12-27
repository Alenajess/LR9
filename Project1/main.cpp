#include "Header.h"
#include <conio.h>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	Stack a;
	int b;
	bool flag = true;
	while (flag)
	{
		cout << "1. Добавить элемент в стек\n";
		cout << "2. Получить элемент из стека\n";
		cout << "3. Посмотреть элемент из стека\n";
		cout << "4. Длина стека\n";
		cout << "5. Выход\n";
		switch (_getch()) 
		{
			case '1':
				cout << "Добавить элемент: ";
				cin >> b;
				a.Push(b);
				break;
			case '2':
				a.Pop(b) ? cout << "Полученный элемент " << b << endl : cout << "Cтек пуст\n";
				break;
			case '3':
				a.Peek(b) ? cout << "Последний элемент " << b << endl : cout << "Cтек пуст\n";
				break;
			case '4':
				b = a.GetSize();
				cout << "Длина стека: " << b << endl;
				break;
			case '5':
				flag = false;
				break;

		}
	}

}