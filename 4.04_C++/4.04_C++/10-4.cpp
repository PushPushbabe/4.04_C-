#include <iostream>

namespace ex10_4 {
	class Complex {
	private:
		int real;
		int image;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		friend Complex &AddOnePrefix(Complex &Operand);
		friend Complex &AddOnePostfix(Complex &Operand);
	};

	void Complex::ShowComplex()
	{
		std::cout << "( " << real << " + " << image << "i )" << std::endl;
	}

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex& AddOnePrefix(Complex &Operand)
	{
		++Operand.real;
		++Operand.image;
		return Operand;
	}

	Complex& AddOnePostfix(Complex &Operand)
	{
		Complex temp;
		temp = Operand;
		++Operand.real;
		++Operand.image;
		return temp;
	}
}
using namespace ex10_4;

//
//int main()
//{
//	Complex x(10, 20), y(20, 40);
//	Complex z;
//
//	std::cout << "--------急青贸府---------\n";
//	z = AddOnePrefix(x);
//	x.ShowComplex();
//	z.ShowComplex();
//
//	std::cout << "--------饶青贸府---------\n";
//	z = AddOnePostfix(y);
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}
//
