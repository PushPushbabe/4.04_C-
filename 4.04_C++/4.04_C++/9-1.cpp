#include <iostream>

namespace exer9_1 {
	class Complex
	{
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex() const;

	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{
	}

	void Complex::ShowComplex() const
	{
		std::cout << real << " + " << image << std::endl;
	}

}
//
//int main()
//{
//	exer9_1::Complex x(10, 20);
//	exer9_1::Complex y;
//	std::cout << " Object X => ";
//	x.ShowComplex();
//	std::cout << " Object Y => ";
//	y.ShowComplex();
//
//	exer9_1::Complex *pCom;
//	pCom = &x;
//	std::cout << "\n pCom -> ShowComplex() =>";
//	pCom->ShowComplex();
//
//	pCom = &y;
//	std::cout << "\n pCom -> ShowComplex() =>";
//	pCom->ShowComplex();
//	   	  
//	return 0;
//}