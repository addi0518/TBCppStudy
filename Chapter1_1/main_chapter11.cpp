#include <iostream> //cout, cin, endl, ...
#include <cstdio> //printf

int main()
{
	int x = 1024;
	std::cout << "This is chapter11" << std::endl;
	std::cout << "This is chapter11\n";
	std::cout << "x is " << x << std::endl;

	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	std::cout << "\a"; //����� �Ҹ� ���

	return 0;
}
