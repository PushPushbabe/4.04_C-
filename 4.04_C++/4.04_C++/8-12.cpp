#include <iostream>
namespace ex8_12{
	class Complex //�� �����ڸ� ���������? - ���α׷����� �Ǽ��� �ٿ��ְ� ���ϰ� ������Ʈ ������ ���ö��
	{
	private:
		int real;
		int image;
	public:
		Complex(int r, int i); //�Ű������� �����ϴ� ������ ����
		void ShowComplex() const;
	};

	Complex::Complex(int r, int i) //�Ű������� �����ϴ� ������ ����
	{
		real = r;
		image = i;
	}

	void Complex::ShowComplex() const
	{
		std::cout << "( " << real << " + " << image << "i ) " << std::endl;

	}
}
//int main()
//{
//	ex8_12::Complex x(10, 20);
//	ex8_12::Complex y(30, 40);
//
//	x.ShowComplex();
//	y.ShowComplex();
//
//
//	return 0;
//}