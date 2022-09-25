#include <iostream>
#include "Stack.h"
using namespace std;

template<class T=char>
T* CreateArr(const int size) {
	T *arr = new T[size];
	return arr;
}

template<class T>
void InitArr(T* arr, const int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void InitArr(char* arr, const int size, const char* str) {
	for (int i = 0; i < size - 1 || *(str + i) != '\0'; i++) {
		*(arr + i) = *(str + i);
	}
	*(arr + size - 1) = '\0';
}

bool IsOpen(char c) {
	if (c == '(') {
		return true;
	}
	else if (c == '[') {
		return true;
	}
	else if (c == '{') {
		return true;
	}
	else { return false; }
}

bool IsClose(char c) {
	if (c == ')') {
		return true;
	}
	else if (c == ']') {
		return true;
	}
	else if (c == '}') {
		return true;
	}
	else { return false; }
}

char CompareBeg(char c) {
	if (c == ')') {
		return '(';
	}
	else if (c == ']') {
		return '[';
	}
	else if (c == '}') {
		return '{';
	}
	else { return '\0'; }
}

void Check( Stack& obj, char*arr) {
	for (int i = 0; i < strlen(arr); i++) {
		if (IsOpen(arr[i]) == 1) {
			obj.Push(arr[i]);
		}
		else {
			if (IsClose(arr[i]) == 1) {
				if (obj.IsEmpty()!=1 && obj.GetTopVal() == CompareBeg(arr[i])) {
					obj.Pop();
				}
				else {
					cout << "error" << i << "index\n" << arr[i] << endl;
					return;
				}
			}
		}
	}
	cout << "Ok\n";
}


int main() {
	const int size = 40;
	char* arr = CreateArr(size);
	InitArr(arr, size, "([x-y-z]*[x+2y]-{z+4x})");
	Stack obj;
	Check(obj, arr);
	delete[] arr;
}