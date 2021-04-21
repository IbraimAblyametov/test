#include <iostream> 
using namespace std;

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void PrintArray(int arr[], const int size)
{
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	
	const int size = 10;
	int massiv[size];
	FillArray(massiv, size);
	PrintArray(massiv, size);

	
}
    
 /*
 Запись в тетрадь
 Объявляем 2 функции. Одна будет задавать массиву значение, а другая выводить его.
 FillArray - заполняет
 PrintArray - выводит
 В параметрах иниц. массив и его длину.
 Иниц. массив и его длину в функции main(у массива может быть любое имя)
 Вызываем функции. 
 */