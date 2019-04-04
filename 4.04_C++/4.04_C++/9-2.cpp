#include <iostream>


namespace exer9_2 {
	class Complex {
	private :
		int real;
		int image;
	public :
		Complex(int real = 0, int image = 0);
		void ShowComplex() const;

	};


	Complex::Complex(int real, int image)
	{
		this->real = real;
		this->image = image;
	}

	void Complex::ShowComplex() const
	{
		std::cout << real << " + " << image << std::endl;
	}

}

//int main()
//{
//	exer9_2::Complex x(10, 20);
//	x.ShowComplex();
//
//	return 0;
//}