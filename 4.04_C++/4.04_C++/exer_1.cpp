#include <iostream>

namespace exer_1 {
	class CRect {
		int left;
		int right;
		int top;
		int bottom;
	public: 
		void print();
		void SetLeft(int l);
		void SetRight(int r);
		void SetTop(int t);
		void SetBottom(int b);

	};

	void CRect::print()
	{
		std::cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << std::endl;
	}

	void CRect::SetLeft(int l)
	{
		left = l;
	}

	void CRect::SetRight(int r)
	{
		right = r;
	}

	void CRect::SetTop(int t)
	{
		top = t;
	}

	void CRect::SetBottom(int b)
	{
		bottom = b;
	}

}

//int main()
//{
//	exer_1::CRect obj_1;
//	obj_1.SetLeft(0);
//	obj_1.SetTop(0);
//	obj_1.SetRight(0);
//	obj_1.SetBottom(0);
//
//	obj_1.print();
//
//	return 0;
//}