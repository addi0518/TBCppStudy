#include <iostream>
#include <cstdio>
#include "MyHeaders/FunctionAdd.h" //���� ������ ����
//#include "FunctionAdd.h" //��� �Լ� import

using namespace std; //std ����

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

