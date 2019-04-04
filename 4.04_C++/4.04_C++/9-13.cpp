#include <iostream>

namespace ex9_13 {
	class Complex
	{
	private:
		int image;
		int real;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex() const;
	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{

	}

	void Complex::ShowComplex() const
	{
		std::cout << "( " << real << " + " << image << "i )" << std::endl;
	}

}
using namespace ex9_13;

//
//int main()
//{
//	Complex arr[4] = {
//		Complex(2,4),
//		Complex(4,8),
//		Complex(8,16),
//		Complex(16,32),
//	};
//
//	Complex * pCom = arr;
//
//	pCom->ShowComplex();
//	(pCom + 1)->ShowComplex();
//
//
//	return 0;
//}