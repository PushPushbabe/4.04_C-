#include <iostream>

namespace ex9_7 {
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

	Complex& CopyComplex(Complex & des, Complex  & src)
	{
		des = src;
		return des;
	}

}
//
//int main()
//{
//	ex9_7::Complex x(10, 20);
//	ex9_7::Complex y(30, 40);
//	ex9_7::Complex z;
//
//	z = ex9_7::CopyComplex(y, x);
//
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//	std::cout << " z => ";
//	z.ShowComplex();
//
//
//	return 0;
//}