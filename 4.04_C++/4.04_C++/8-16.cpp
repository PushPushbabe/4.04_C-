#include <iostream>

namespace ex8_16{
	class Complex {
		private :
			int real;
			int image;
		public :
			Complex(int r =0 ,int i=0);
			~Complex();
			void ShowComplex();
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

	Complex::~Complex()
	{
		std::cout << "�Ҹ��ڰ� ȣ��ȴ� . \n";  //�Ҹ��ڴ� return ���Ŀ� ȣ��ǳ�? ������ �����鼭 ȣ��Ǵ°ǰ�? �극��ũ����Ʈ�� return���� ������ �Ҹ��ڰ� �ȳ���
	}											//å���� �Ҹ��� ȣ�� ������ �����Ϸ��� �����Ѵٰ� ��

} //���Ŭ������ auto,extern,static,register�� 4������ ������ �����Ⱓ�� �����Ѵ�, ��Ͽ����� ������ ���׸�Ʈ�� ������ ���
  

//int main()
//{
//	ex8_16::Complex x(10, 20);
//	ex8_16::Complex y(30);
//	ex8_16::Complex z;
//
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}