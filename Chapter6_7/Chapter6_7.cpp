#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int* ptr = &x;
    int* ptr_n = nullptr; // �ּҰ� ����(������ �ּҰ�)

    cout << x << endl;
    cout << &x << endl; // & : address-of operator
    cout << *&x << endl; // * : de-reference operator 

    // & : �ּҰ��� ��Ÿ��
    // * : �ּҰ��� �ִ� ���� ���� ��

    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}

