#include <iostream>

namespace ex9_15{
	class Complex
	{
	private:
		int image;
		int real;
	public:
		Complex(int r = 0, int i = 0);
		void ShowComplex() const;
		friend void prn(Complex * pCom);
	};

	Complex::Complex(int r, int i) : real(r), image(i)
	{

	}

	void Complex::ShowComplex() const
	{
		std::cout << "( " << real << " + " << image << "i )" << std::endl;
	}

	void prn(Complex * pCom)
	{
		for (int i = 0; i < 4;i++)
		{
			std::cout << "( " << pCom[i].real << " + " << pCom[i].image << "i ) " << std::endl; //멤버변수에 직접접근 가능
		}
	}

}
using namespace ex9_15; //using namespace의 경우 해당 namespace의 선언이 이곳에 있어야 사용되며
					    //namespace의 경우 동일한 이름으로 다른 위치에 생성하면 컴파일러가 알아서 하나로 합쳐준다.
						//즉 여러곳의 namespace마다 동일한걸 선언해주면 오버라이딩~
//
//int main()
//{
//	Complex arr[4] = {
//		Complex(2,4),
//		Complex(4,8),
//		Complex(8,16),
//		Complex(16,32),
//			};
//
//	prn(arr);
//
//	return 0;
//}