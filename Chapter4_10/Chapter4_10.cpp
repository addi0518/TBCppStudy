#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float weight;
    int age;
    string name;
};

int main()
{
    Person me{ 2.0, 100.0, 20, "Yyyy" };
    Person other;
}

