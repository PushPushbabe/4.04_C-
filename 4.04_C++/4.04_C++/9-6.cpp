#include <iostream>

namespace ex9_6 {
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

	void CopyComplex(Complex *pDes, Complex src)
	{
		*pDes = src;
	}

}
//
//int main()
//{
//	ex9_6::Complex x(10, 20);
//	ex9_6::Complex y(30, 40);
//
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	std::cout << "-------------------------------\n";
//	ex9_6::CopyComplex(&y, x);
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//	return 0;
//}