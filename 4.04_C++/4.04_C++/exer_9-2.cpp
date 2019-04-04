#include <iostream>

namespace exer9_2{
	class abc {
		int a;
	public:
		void init();
		friend void prn(abc);
	};

	void abc::init()
	{
		a = 10;
	}

	void prn(abc _abc)
	{
		std::cout << _abc.a;
	}
}

using namespace exer9_2;
//int main()
//{
//	abc k;
//	k.init();
//	prn(k);
//
//
//	return 0;
//}