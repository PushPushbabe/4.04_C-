#include <iostream>
namespace ex8_11 {
	class Complex {
	private:
		int real;
		int image;
	public:
		Complex(); //�Ű������� ���� ������ _����Ʈ ������ ����
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