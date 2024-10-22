#include <iostream>
#include <cstdio>

using namespace std; //std 생략
// forward declaration(전방 선언) 쓰이는 함수가 밑에 있음을 알림. 
// 위로 옮기지 않아도 됨.
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

	return; //indenting = 앞에 여백 냅두는 것
}
