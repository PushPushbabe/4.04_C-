#include <iostream>

class Test {
	int num;
public :
	void init();
	void prn();
};

void Test::init()
{
	num = 20;
}

void Test::prn()
{
	std::cout << num << "\n";
}

//int main()
//{
//	Test a, *p;
//	p = &a;
//	a.init();
//	a.prn();
//
//	p->init();
//	p->prn();
//
//
//	return 0;
//}