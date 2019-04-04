#include <iostream>

namespace ex10_5 {
	class Complex {
	private:
		int real;
		int image;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		Complex operator+(Complex rightHand);
		Complex operator-(const Complex& rightHand) const;  //��ü.operator-(��ü)
		Complex operator-() const; //��ü.operator-()
	};

	void Complex::ShowComplex()
	{
		if (image > 0)
			std::cout << "( " << real << " + " << image << "i )" << std::endl;
		else if (image < 0)
			std::cout << "( " << real << " " << image << "i )" << std::endl;
		else
			std::cout << real << std::endl;
	}

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex Complex::operator+(Complex rightHand)
	{
		Complex res;
		res.real = this->real + rightHand.real;
		res.image = this->image + rightHand.image;
		return res;
	}

	Complex Complex::operator-(const Complex& rightHand) const
	{
		Complex res;
		res.real = this->real - rightHand.real;
		res.image = this->image - rightHand.image;
		return res;
	}
	
	Complex Complex::operator-() const
	{
		Complex res;
		res.real = -(this->real);
		res.image = -(this->image);
		return res;

	}

}
using namespace ex10_5;

//
//int main()
//{
//	Complex x(10, 20), y(20, 40);
//	Complex z;
//
//	std::cout << "-- �� Complex ��ü�� ���� ���� --\n";
//	z = x + y;
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	std::cout << "-- �� Complex ��ü�� ���� ���� --\n";
//	z = x - y;
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	std::cout << "-- ��ü�� ��ȣ ���� --\n";
//	z = -x;
//	x.ShowComplex();
//	z.ShowComplex();
//
//
//	return 0;
//}

