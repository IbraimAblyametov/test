#include <iostream>
using namespace std;
// Пример 1
inline int Sum(int a, int b)
{
	int rezult;
	rezult = a + b;
	return rezult;
	// или return a + b;
}


void main()
{
	setlocale(LC_ALL, "ru");


}
/*
Запись в тетрадь
Что такое встраиваемая функция? И для чего она нужна. 
Она нужна чтобы ваш код работал быстрее.
Напишем простинькую функцию. << Пример 1.
// inline по сути нихера не делает, оно просто вставляет содеожимое
фуекции в код или что то вроде этого. Хз, непонятная тема(((
*/
