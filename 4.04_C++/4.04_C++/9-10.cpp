#include <iostream>

namespace ex9_10 {
	class StaticTest {
	private:
		static int a;
		int b;
	public:
		StaticTest();
		static void PrintA();
		void PrintB();
	};

	StaticTest::StaticTest()
	{
		b = 20;
	}

	int StaticTest::a = 10;

	void StaticTest::PrintA() {
		std::cout << " a : " << a << std::endl;
		//std::cout << " this->a : " << this->a <<std::endl; 비정적멤버 함수 또는 비정적 데이터 멤버 이니셜라이저 안에서만 참조할 수 있습니다.
		//std::cout << " b : " << b << std::endl; 비정적멤버에 대한 참조는 특정개체에 대해 상대적이어야 합니다.
	}

	void StaticTest::PrintB() {

		std::cout << " this -> b : " << this->b << std::endl;

	}

}

//int main()
//{
//	ex9_10::StaticTest s1;
//
//	s1.PrintA();
//	s1.PrintB();
//
//	return 0;
//}
