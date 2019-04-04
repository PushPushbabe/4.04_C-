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
		//std::cout << " this->a : " << this->a <<std::endl; ��������� �Լ� �Ǵ� ������ ������ ��� �̴ϼȶ����� �ȿ����� ������ �� �ֽ��ϴ�.
		//std::cout << " b : " << b << std::endl; ����������� ���� ������ Ư����ü�� ���� ������̾�� �մϴ�.
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
