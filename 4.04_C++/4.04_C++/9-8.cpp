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
//	std::cout << " StaticTest::a => " << ex9_8::StaticTest::a << "\n\n"; //Ŭ���� ������� = ������������� ���������� ������ �����ϴ�.
//	//std::cout << " StaticTest::b => " << ex9_8::StaticTest::b << "\n\n";  //�ν��Ͻ� ���� ����� public���� �����߾ ��ü�� ���ؼ��� ���� �����ϴ�.
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