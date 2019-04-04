#include <iostream>


namespace exer9_1 {
	class StaticTest {
	public:
		static int sint;
		int nint;
		StaticTest()
		{
			nint = 100;
		}

	};


	int StaticTest::sint = 100;


}

using namespace exer9_1;
//
//int main()
//{
//	StaticTest a, b, c;
//	std::cout << "[1] ";
//	std::cout << a.sint << ", ";
//	std::cout << b.sint << ", ";
//	std::cout << c.sint << std::endl;
//	std::cout << "[2] ";
//	std::cout << a.nint << ", ";
//	std::cout << b.nint << ", ";
//	std::cout << c.nint << std::endl;
//
//	a.sint = 0;
//	a.nint = 0;
//
//	std::cout << "[3] ";
//	std::cout << a.sint << ", ";
//	std::cout << b.sint << ", ";
//	std::cout << c.sint << std::endl;
//
//	std::cout << "[4] ";
//	std::cout << a.nint << ", ";
//	std::cout << b.nint << ", ";
//	std::cout << c.nint << std::endl;
//
//	return 0;
//}