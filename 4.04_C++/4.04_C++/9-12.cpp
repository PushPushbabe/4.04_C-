#include <iostream>

namespace ex9_12 {
	class Complex
	{
	private :
		int image;
		int real;
	public :
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
using namespace ex9_12;

//int main()
//{
//	Complex arr[4] = { //��ü�迭�� ���� �� �ʱ�ȭ, �ʱ�ȭ ��ĸ� �ణ �ٸ���
//			Complex(2,4),
//			Complex(4, 8),
//			Complex(8,16),
//			Complex(16,32),
//	};
//
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i].ShowComplex();
//	}
//
//	return 0;
//}