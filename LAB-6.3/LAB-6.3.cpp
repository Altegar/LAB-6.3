// LAB-6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_3.cpp
// Сушинський Ігор
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 20
// Ітераційний спосіб

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Random(int* a, int n, int x, int y)
{
	for (int i = 0; i < n; i++) // i - додаткова змінна
		a[i] = rand() % (y - x + 1) + x;
}

int Max(int* a, const int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

void Print(int* a, int n) // форматне виведення
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << a[i] << " ";
	cout << "\n";
}

int main()
{
	srand((unsigned)time(0)); // ініціалізація генератора випадкових чисел

	const int n = 24;
	int a[n];
	int x = 2, y = 66;

	Random(a, n, x, y);
	cout << "Array = "; Print(a, n);

	cout << "Max = " << Max(a, n) << endl;

	return 0;
}