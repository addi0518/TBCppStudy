#include <iostream>

int main()
{
    using namespace std;

    double d1(100 - 99.99);
    double d2(10 - 9.99);

    cout << d1 - d2 << endl; //오차가 있어 다르게 나온다.

    const double epsilon = 1e-16;

    if (std::abs(d1 - d2) < epsilon) //절대값(abs)으로 비교
        cout << "Approximately equal" << endl;
    else
        cout << "Not equal" << endl;

    //short circuit evaluation
    int x = 2;
    int y = 2;
    if (x == 1 && y++ == 2) // x == 1에서 false가 나오기 때문에 y++ == 2 는 수행하지 않음
    {
        //do something
    }

    cout << y << endl;

    //&&가 || 보다 우선 순위가 높음
    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3); //r1 == r3

    return 0;
}
