#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Stack
{
	// ������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 20 };
	// ������ ��� �������� ������
	char st[FULL + 1];
	// ��������� �� ������� �����
	int top;

public:
	// �����������
	Stack();

	// ���������� ��������
	void Push(char c);

	// ���������� ��������
	char Pop();

	// ������� �����
	void Clear();

	// �������� ������������� ��������� � �����
	bool IsEmpty();

	// �������� �� ������������ �����
	bool IsFull();

	// ���������� ��������� � �����
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
//	// ���� ���� �� ����������
//	while (!ST.IsFull())
//	{
//		c = rand() % 4 + 2;
//		ST.Push(c);
//	}
//	ST.Output();
//	// ���� ���� �� �����������
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

