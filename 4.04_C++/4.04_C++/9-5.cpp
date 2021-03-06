#include <iostream>

namespace ex9_5 {
	class Complex
	{
	private:
		int real;
		int image;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex() const;
		void SetComplex(int r = 0, int i = 0);

	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{

	}

	void Complex::ShowComplex() const
	{
		std::cout << real << " + " << image << std::endl;
	}

	void Complex::SetComplex(int r, int i)
	{
		this->real = r;
		this->image = i;
	}

	Complex CopyComplex(Complex des, Complex src)
	{
		des = src;
		return des;
	}

}
//
//
//int main()
//{
//	ex9_5::Complex x(10, 20);
//	ex9_5::Complex y(30, 40);
//
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	std::cout << "------------------------------------\n";
//	y=ex9_5::CopyComplex(y, x); //새로 생성된 x,y객체의 값은 같아졌지만 실 매개변수에는 아무런 변화가 없다
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	return 0;
//}