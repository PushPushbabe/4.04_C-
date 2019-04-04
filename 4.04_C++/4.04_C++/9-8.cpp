#include <iostream>

namespace ex9_8 {
	class StaticTest {
	public :
		static int a;
		int b;

		StaticTest();
	};

	StaticTest::StaticTest()
	{
		b = 20;
	}

	int StaticTest::a = 10;

}

//
//int main()
//{
//	std::cout << " StaticTest::a => " << ex9_8::StaticTest::a << "\n\n"; //클래스 단위멤버 = 정적멤버변수는 직접적으로 접근이 가능하다.
//	//std::cout << " StaticTest::b => " << ex9_8::StaticTest::b << "\n\n";  //인스턴스 단위 멤버는 public으로 선언했어도 객체를 통해서만 접근 가능하다.
//
//	ex9_8::StaticTest s1, s2;
//
//	std::cout << " s1.a -> " << s1.a << " \t s2.a ->" << s2.a << "\n";
//	std::cout << " s1.b -> " << s1.b << " \t s2.b ->" << s2.b << "\n\n";
//
//
//	s1.a = 100;
//	std::cout << " s1.a -> " << s1.a << "\t";
//	std::cout << " s2.a -> " << s2.a << "\n\n";
//
//
//	s1.b = 200;
//	std::cout << " s1.b -> " << s1.b << "\t";
//	std::cout << " s2.b -> " << s2.b << "\n";
//
//	return 0;
//
//}