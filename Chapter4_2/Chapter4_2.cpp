#include <iostream>
#include "ConstantsTool.h"

using namespace std;

//forward declaration
void doPrint(); //앞에 extern이 생략
void ConstantsPrint();

int value = 10;

void doSome()
{
    //static이므로 메모리 초기화 최초 한 번 후 같은 주소 사용 다른 cpp파일에서 사용X
    static int a = 1; 
    ++a;
    cout << a << endl;
}

int main()
{
    int value = 12;

    cout << ::value << endl; //전역 연산자 사용
    cout << value << endl;
    
    doSome();
    doSome();

    //extern을 사용하여 다른 cpp파일 한 곳에서만 초기화 하여 같은 주소값을 사용
    //linking 할 때 cpp파일 별로 생성된 obj 파일들을 엮음
    //h파일을 include 해서 이용하면 다른 주소값을 사용
    cout << "In Chapter4_2.cpp file " << Constants::pi << " " << &Constants::pi << endl;
    ConstantsPrint();

    return 0;
}
