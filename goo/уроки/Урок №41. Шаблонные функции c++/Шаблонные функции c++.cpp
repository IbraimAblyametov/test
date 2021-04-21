#include <iostream>
using namespace std;

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int Sum(int a, int b, int c)
{
	return a + b + c;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << Sum(5, 6) << endl;
	cout << Sum(4.5, 24.5) << endl;
	cout << Sum(4, 5, 3) << endl;
}
/*
Запись в тетрать
Шаблонной функции все равно с каким типом данных ей работать
Кста, мы можем создать свой тип данных



*/