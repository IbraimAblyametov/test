#include <iostream>
using namespace std;

void foo(int b)
{
	for (int i = 0; i < b; i++)
	{
		cout << "#" << endl;
	}
}
// ������ 1
int po_umolchaniu(int a = 5) // << ���������� � = 5 �� ���������
{
	for (int z = 0; z < a; z++)
	{
		cout << z << endl;	
	}
}
void main()
{
	setlocale(LC_ALL, "Russian");
	foo(3); // 3 ���� ��������� �������
	po_umolchaniu(); // ����� �� ��������� ��������
}
/*
������ � ������
��� �������� � ��������� ������� �� �����������, ����� ��� �������� ������� �������� ����� ��
������.(��. ������ 1)
*/