#include <iostream>
namespace ex8_11 {
	class Complex {
	private:
		int real;
		int image;
	public:
		Complex(); //매개변수가 없는 생성자 _디폴트 생성자 생성
		void ShowComplex() const;
	};

	Complex::Complex()
	{
		real = 5;
		image = 20;
	}

	void Complex::ShowComplex() const
	{
		std::cout << "( " << real << " + " << image << "i )" << std::endl;
	}
}
//int main()
//{
//	Complex x;
//	x.ShowComplex();
//	return 0;
//}