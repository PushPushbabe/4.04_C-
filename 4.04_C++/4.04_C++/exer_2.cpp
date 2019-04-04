#include <iostream>

namespace exer_2 {
	class CRect {
	private :
		int left;
		int right;
		int top;
		int bottom;

	public :
		void print();
		void SetRect(int l=0, int t=0, int r=0, int b=0);


	};

	void CRect::print()
	{
		std::cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << std::endl;
	}

	void CRect::SetRect(int l, int t, int r, int b) // : left(l), right(r), top(t), bottom(b) 생성자 정의시에만 사용 가능한 초기화 옵션
	{
		left = l;
		right = r;
		top = t;
		bottom = b;
	}

	

}
//
//int main()
//{
//	exer_2::CRect obj_1;
//	obj_1.SetRect(0, 0, 20, 20);
//	obj_1.print();
//
//
//	return 0;
//}