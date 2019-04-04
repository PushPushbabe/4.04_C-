#include <iostream>

namespace exer9_3 {
	class Complex {
	private :
		int real;
		int image;
	public :
		Complex(int r = 0, int i = 0);
		void ShowComplex();
		void SetComplex(int r = 0, int i = 0);
	};

	Complex::Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	void Complex::ShowComplex()
	{
		std::cout << real << " + " << image << std::endl;
	}

	void Complex::SetComplex(int r, int i)
	{
		this->real = r; 
		this->image = i;
	}
}
//
//
//int main()
//{
//	exer9_3::Complex x(10, 20);
//	exer9_3::Complex y;
//
//	std::cout << "---------------------------\n";
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//	
//	std::cout << "---------------------------\n";
//	y = x;//���� �����ڸ� Ȱ���ؼ� ��ü������ ���� �ִ� ���, ������ ������ ��ġ�� �ٲٴ� �Ű���.
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//	std::cout << "---------------------------\n";
//	y.SetComplex(30, 40);
//	std::cout << " x => ";
//	x.ShowComplex();
//	std::cout << " y => ";
//	y.ShowComplex();
//
//
//	return 0;
//}