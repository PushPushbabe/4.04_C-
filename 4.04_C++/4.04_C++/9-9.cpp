#include <iostream>


namespace ex9_9 {
	class StaticTest {
	private:
		static int a;
		int b;
	public:
		StaticTest();
		static void SetA(int new_a);
		static int GetA();
		void ShowA();
	};

	StaticTest::StaticTest()
	{
		b = 20;
	}

	void StaticTest::ShowA()
	{
		std::cout << a;
	}

	int StaticTest::a = 10;

	void StaticTest::SetA(int new_a)
	{
		a = new_a;
	}

	int StaticTest::GetA()
	{
		return a;
	}
}
//
//int main()
//{
//
//	//std::cout << " StaticTest.a -> " << ex9_9::StaticTest.a << "\n\n"; //private 접근지정자 때문에 접근 불가
//
//	std::cout << " StaticTest::GetA() => " << ex9_9::StaticTest::GetA() << "\n\n";
//
//	ex9_9::StaticTest s1, s2;
//
//	s1.SetA(10000);
//	std::cout << " s1.GetA() -> " << s1.GetA() << "\t";
//	std::cout << " s2.GetA() -> " << s2.GetA() << "\n\n";
//
//	std::cout << " s2.ShowA() -> ";
//	s2.ShowA();
//
//	return 0;
//
//
//
//}