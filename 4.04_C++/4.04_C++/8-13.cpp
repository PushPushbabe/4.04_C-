#include <iostream>
namespace ex8_13 {
	class Complex
	{
	private:
		int real;
		int image;
	public:
		Complex(); //생성자 오버로딩 가능
		Complex(int r, int i);
		void ShowComplex();
	};


	Complex::Complex()
	{
		real = 0;
		image = 0;
	}

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
//	ex8_13::Complex x(10, 20);
//	ex8_13::Complex y(30, 40);
//	ex8_13::Complex z;
//
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}