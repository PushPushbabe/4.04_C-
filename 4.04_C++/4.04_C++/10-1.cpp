#include <iostream>

namespace ex10_1 {
	class Complex {
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		Complex Sum(Complex rightHand);
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

	Complex Complex::Sum(Complex rightHand)
	{
		Complex res;
		res.real = this->real + rightHand.real;
		res.image = this->image + rightHand.image;

		return res; //객체의 대입연산으로 합 전달
	}
}
using namespace ex10_1;
//
//int main()
//{
//	Complex x(10, 20), y(20, 40);
//	Complex z;
//
//	z = x.Sum(y);
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}