#include <iostream>
using namespace std;

void foo(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}
// ������ 1
void po_umolchaniu(int a = 5, double b = 5.3) // << ���������� � = 5 � b = 5.3 �� ���������
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
	foo(3); // 3 ���� ��������� �������
	po_umolchaniu(); // ����� �� ��������� �������� 
}
/*
������ � ������
��� �������� � ��������� ������� �� �����������, ����� ��� �������� ������� �������� ����� �� 
������.(��. ������ 1)
������� ����� ������� ����� ��������, ����� ����� �� ���������
*/