#include <iostream> 
using namespace std;

void Foo(int a)
{
	a++;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a = 1;
	Foo(a);
	cout << a << endl;
}