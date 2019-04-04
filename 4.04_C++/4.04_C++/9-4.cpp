#include <iostream>

namespace ex9_4 {
	class Complex
	{
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex() const;
		void SetComplex(int r = 0, int i = 0);

	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{

	}

	void Complex::ShowComplex() const
	{
		std::cout << real << " + " << image << std::endl;
	}

	void Complex::SetComplex(int r, int i)
	{
		this->real = r;
		this->image = i;
	}

	void CopyComplex(Complex des, Complex src)
	{
		des = src;
	}

}

//int main()
//{
//	ex9_4::Complex x(10, 20);
//	ex9_4::Complex y(30, 40);
//
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	std::cout << "------------------------------------\n";
//	ex9_4::CopyComplex(y, x); //���� ������ x,y��ü�� ���� ���������� �� �Ű��������� �ƹ��� ��ȭ�� ����
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	return 0;
//}