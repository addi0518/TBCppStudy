#include <iostream>
#include <cstdio>

using namespace std; //std ����
// forward declaration(���� ����) ���̴� �Լ��� �ؿ� ������ �˸�. 
// ���� �ű��� �ʾƵ� ��.
int addTwoNumbers(int a, int b); 
void printHello();

int main()
{
	int x, y;

	cin >> x;
	cin >> y;
	cout << "Input is " << x << " and " << y << endl;

	cout << addTwoNumbers(x, y) << endl;

	printHello();

	return 0;
}

//definition
int addTwoNumbers(int a, int b)
{
	int sum = a + b;

	return sum;
}

void printHello()
{
	cout << "Hello" << endl;

	return; //indenting = �տ� ���� ���δ� ��
}
