#include <iostream>
#include <cstdio>
#include "MyHeaders/FunctionAdd.h" //하위 폴더로 변경
//#include "FunctionAdd.h" //헤더 함수 import

using namespace std; //std 생략

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

