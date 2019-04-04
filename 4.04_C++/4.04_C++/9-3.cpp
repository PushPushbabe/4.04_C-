#include <iostream>

namespace exer9_3 {
	class Complex {
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		void SetComplex(int r = 0, int i = 0);
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	void Complex::ShowComplex()
	{
		std::cout << real << " + " << image << std::endl;
	}

	void Complex::SetComplex(int r, int i)
	{
		this->real = r; 
		this->image = i;
	}
}
//
//
//int main()
//{
//	exer9_3::Complex x(10, 20);
//	exer9_3::Complex y;
//
//	std::cout << "---------------------------\n";
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//	
//	std::cout << "---------------------------\n";
//	y = x;//대입 연산자를 활용해서 객체단위로 값을 넣는 경우, 실제론 포인팅 위치만 바꾸는 거겠지.
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//	std::cout << "---------------------------\n";
//	y.SetComplex(30, 40);
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	return 0;
//}