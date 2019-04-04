#include <iostream>

namespace ex8_15 {
	class Complex {
	private :
		int real;
		int image;

	public :
		Complex(int r =0, int i=0);
		void ShowComplex() const;
	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{
		//정의부분에서 할 걸 콜론으로 초기화시킬 수도 있다.
	}

	void Complex::ShowComplex() const
	{
		std::cout << real << " + " << image << std::endl;
	}


}
//
//int main()
//{
//	ex8_15::Complex x(10, 20);
//	ex8_15::Complex y(30);
//	ex8_15::Complex z;
//
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}

