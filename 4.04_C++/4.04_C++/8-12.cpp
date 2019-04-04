#include <iostream>
namespace ex8_12{
	class Complex //왜 생성자를 만들었을까? - 프로그래머의 실수를 줄여주고 편하게 오브젝트 개념을 쓰시라고
	{
	private:
		int real;
		int image;
	public:
		Complex(int r, int i); //매개변수가 존재하는 생성자 선언
		void ShowComplex() const;
	};

	Complex::Complex(int r, int i) //매개변수가 존재하는 생성자 정의
	{
		real = r;
		image = i;
	}

	void Complex::ShowComplex() const
	{
		std::cout << "( " << real << " + " << image << "i ) " << std::endl;

	}
}
//int main()
//{
//	ex8_12::Complex x(10, 20);
//	ex8_12::Complex y(30, 40);
//
//	x.ShowComplex();
//	y.ShowComplex();
//
//
//	return 0;
//}