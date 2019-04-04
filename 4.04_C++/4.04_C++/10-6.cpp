#include <iostream>

namespace ex10_6{
	class Complex {
	private:
		int real;
		int image;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		Complex operator+(Complex rightHand);
		Complex operator-(const Complex& rightHand) const;  //°´Ã¼.operator-(°´Ã¼)
		Complex operator-() const; //°´Ã¼.operator-()
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

	

}
using namespace ex10_6;

int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	


	return 0;
}
