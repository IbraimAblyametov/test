#include <iostream> 
using namespace std;
//����: ������� �������
// ������ 1 >>
void foo()
{
    cout << "� �������, ���� �������!\n";
}

int Sum(int a, int b)
{
    int rezult;
    rezult = a + b;
    return rezult;
}
int main()
{
    setlocale(LC_ALL, "ru");
    foo(); // << ������ 2
    for (int i = 0; i < 10;i++) {
        foo(); // << ������ 3
    }
    // ������ 4 >>
    foo();
    foo();
    foo();
    foo();
    foo();

    int c;
    int q, h, w;
    c = Sum(2, 5);
    cout << c << endl;
    cin >> q;
    cin >> w;
    h = Sum(q, w);
    cout << h << '\n';
    cout << Sum(q, w) << endl;
}


   /*
   ������ � �������
   ������:
   ������� - ��� ����� ����������� ������� ��������� ������� �����-�� ����� ������������� ������� ����
   ���-�� �������� � ��������� � ����� ������ ��� ����� ��� ����� ����� ������������ ���� ��� �����
   ������ �� ������ ���, ������ ������� ��� ������� � ��� ��������� ������� ��� ���������� ���. 
   � ������� ��� �������� ������� rand()

   ������ �������:
   ��� ������������� ��������_��� �������_(���������) 
   {
   ���� �������
   }
   ������� foo()
   ����...
   ���� ������� ��������� ����� ������� main, �� �� �� �� �������������
   ������ ��� ������� ������� �� ����� ��������(������ 1)
   ���� ����, �� �� �������� ��� setlocale
   ��� ���� ����� ������� �������� �� ����� �������(������ 2)
   ��� �� ������� ����� ������� � ����� (������ 3)
   ������� ����� �������� ����� ��� � ��� ����� �������� ��� ������ ������ (������ 4)
   
   ������� Sum()
   ��� ������� ������� ����� ���� ����������
   ��� ������ ����� ��� ����. ��������!!!
   � ���� ������� ��� ������ ���� ���������
   ��� ���� ����� ������� �������� ����� ����� ����� ��� return
   �������� ��� �� ������������
   */