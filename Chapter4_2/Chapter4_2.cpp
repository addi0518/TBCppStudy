#include <iostream>
#include "ConstantsTool.h"

using namespace std;

//forward declaration
void doPrint(); //�տ� extern�� ����
void ConstantsPrint();

int value = 10;

void doSome()
{
    //static�̹Ƿ� �޸� �ʱ�ȭ ���� �� �� �� ���� �ּ� ��� �ٸ� cpp���Ͽ��� ���X
    static int a = 1; 
    ++a;
    cout << a << endl;
}

int main()
{
    int value = 12;

    cout << ::value << endl; //���� ������ ���
    cout << value << endl;
    
    doSome();
    doSome();

    //extern�� ����Ͽ� �ٸ� cpp���� �� �������� �ʱ�ȭ �Ͽ� ���� �ּҰ��� ���
    //linking �� �� cpp���� ���� ������ obj ���ϵ��� ����
    //h������ include �ؼ� �̿��ϸ� �ٸ� �ּҰ��� ���
    cout << "In Chapter4_2.cpp file " << Constants::pi << " " << &Constants::pi << endl;
    ConstantsPrint();

    return 0;
}
