// LAB-6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_3.cpp
// Сушинський Ігор
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 20
// Ітераційний спосіб

#include <iostream>

using namespace std;

int Max(int* a, const int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

int main()
{
	const int n = 10;
	int a[n] = { 1,3,2,6,15,27,9,61,33,42 };

	cout << "Max = " << Max(a, n) << endl;

	return 0;
}