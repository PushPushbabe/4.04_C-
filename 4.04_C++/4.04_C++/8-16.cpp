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
		std::cout << "소멸자가 호출된다 . \n";  //소멸자는 return 이후에 호출되나? 리턴이 나오면서 호출되는건가? 브레이크포인트를 return으로 잡으면 소멸자가 안나옴
	}											//책에선 소멸자 호출 시점은 컴파일러가 결정한다고 함

} //기억클래스란 auto,extern,static,register로 4가지가 있으며 생존기간을 결정한다, 블록에서만 있을지 세그먼트에 있을지 등등
  

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