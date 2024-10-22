#include <iostream>
using namespace std;

#define LIKE_APPLE

namespace MySpace1
{
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

namespace MySpace2
{
    int doSomethingMinus(int a, int b)
    {
        return a - b;
    }
}


int doSomething(int a, int b)
{
    return a * b;
}

int main()
{
    using namespace MySpace2;

    cout << doSomething(3, 4) << endl;
    cout << MySpace1::doSomething(3, 4) << endl;
    cout << doSomethingMinus(3, 4) << endl;

#ifdef LIKE_APPLE
    cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE //LIKE_APPLE 전처리기 정의가 안 되어있을 때
    cout << "Orange" << endl;
#endif

#ifdef LIKE_APPLE //위 내용과 같음
    cout << "APPLE" << endl;
#else
    cout << "Orange" << endl;
#endif

    //cout << boolalpha;
    cout << true << endl;

    return 0;
}
