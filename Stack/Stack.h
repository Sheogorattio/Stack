#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Stack
{
	// Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 20 };
	// Массив для хранения данных
	char st[FULL + 1];
	// Указатель на вершину стека
	int top;

public:
	// Конструктор
	Stack();

	// Добавление элемента
	void Push(char c);

	// Извлечение элемента
	char Pop();

	// Очистка стека
	void Clear();

	// Проверка существования элементов в стеке
	bool IsEmpty();

	// Проверка на переполнение стека
	bool IsFull();

	// Количество элементов в стеке
	int GetCount();

	void Output()
	{
		for (int i = 0; i < top + 1; i++)
		{
			cout << st[i] << " ";
		}
		cout << endl;
	}

	Stack* operator=(const Stack& obj);

	char GetChar(int index)const;

	char GetTopVal()const;
};




//void main()
//{
//	srand(time(0));
//	Stack ST;
//	char c;
//	// пока стек не заполнится
//	while (!ST.IsFull())
//	{
//		c = rand() % 4 + 2;
//		ST.Push(c);
//	}
//	ST.Output();
//	// пока стек не освободится
//	int i = 0;
//	while (i < 5)
//	{
//		c = ST.Pop();
//		cout << c << " ";
//		i++;
//	}
//	cout << "\n\n";
//	ST.Output();
//
//
//	system("pause");
//}

