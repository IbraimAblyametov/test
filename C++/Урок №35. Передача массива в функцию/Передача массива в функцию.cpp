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
 ������ � �������
 ��������� 2 �������. ���� ����� �������� ������� ��������, � ������ �������� ���.
 FillArray - ���������
 PrintArray - �������
 � ���������� ����. ������ � ��� �����.
 ����. ������ � ��� ����� � ������� main(� ������� ����� ���� ����� ���)
 �������� �������. 
 */