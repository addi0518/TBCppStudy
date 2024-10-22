#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int* ptr = &x;
    int* ptr_n = nullptr; // 주소값 없음(쓰레기 주소값)

    cout << x << endl;
    cout << &x << endl; // & : address-of operator
    cout << *&x << endl; // * : de-reference operator 

    // & : 주소값을 나타냄
    // * : 주소값에 있는 것을 들어다 봄

    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}

