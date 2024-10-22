#include <iostream>
#include "ConstantsTool.h"

using namespace std;

void doPrint() 
{
	cout << "Hello" << endl;
}

void ConstantsPrint() 
{
	cout << "In FuntionTool.cpp " << Constants::pi << " " << &Constants::pi << endl;
}