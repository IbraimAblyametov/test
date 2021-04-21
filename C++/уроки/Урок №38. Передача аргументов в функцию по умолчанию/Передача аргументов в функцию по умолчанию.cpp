#include <iostream>
using namespace std;

void foo(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}
// пример 1
void po_umolchaniu(int a = 5, double b = 5.3) // << установили а = 5 и b = 5.3 по умолчанию
{
	for (int z = 0; z < a; z++)
	{
		z = z++;
		cout << z << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "ru");
	foo(3); // 3 раза вызовется решетка
	po_umolchaniu(); // можно не указывать парамент 
}
/*
Запись в терадь
При указании в параметре функции по умольлчанию, позже при введении функции параметр можно не 
писать.(см. пример 1)
Конечно можно указать новые значения, никто этого не запрещает
*/