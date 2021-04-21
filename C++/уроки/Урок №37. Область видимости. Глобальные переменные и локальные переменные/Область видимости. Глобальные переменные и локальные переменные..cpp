#include <iostream>
using namespace std;

void foo(int b)
{
	for (int i = 0; i < b; i++)
	{
		cout << "#" << endl;
	}
}
// пример 1
int po_umolchaniu(int a = 5) // << установили а = 5 по умолчанию
{
	for (int z = 0; z < a; z++)
	{
		cout << z << endl;	
	}
}
void main()
{
	setlocale(LC_ALL, "Russian");
	foo(3); // 3 раза вызовется решетка
	po_umolchaniu(); // можно не указывать параметр
}
/*
Запись в терадь
При указании в параметре функции по умольлчанию, позже при введении функции параметр можно не
писать.(см. пример 1)
*/