#include <iostream>

namespace ex8_14 {
	class Complex {
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex();
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
}
//int main()
//{
//	ex8_14::Complex x(10, 20);
//	ex8_14::Complex y(30);
//	ex8_14::Complex z;
//
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}