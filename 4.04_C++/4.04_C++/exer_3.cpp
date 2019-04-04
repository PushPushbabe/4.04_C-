#include <iostream>


namespace exer_3 {
	class CRect {
	private:
		int left;
		int right;
		int top;
		int bottom;

	public:
		void prn();
		CRect(int l, int r, int t, int b);
		CRect();
		CRect(int l, int r);
	};

	void CRect::prn()
	{
		std::cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << std::endl;
	}

	CRect::CRect(int l, int t, int r, int b)  : left(l), right(r), top(t), bottom(b) //������ ���ǽÿ��� ��� ������ �ʱ�ȭ �ɼ�
	{
		
	}

	CRect::CRect(int l, int r) : left(l), right(r)//������ ���ǽÿ��� ��� ������ �ʱ�ȭ �ɼ�
	{
		top = 0;
		bottom = 0;
	}
	CRect::CRect()  
	{
		left = 0;
		right = 0;
		top = 0;
		bottom = 0;
	}





}
//
//int main()
//{
//	exer_3::CRect obj_1(0, 0, 20, 20);
//	exer_3::CRect obj_2(20, 20);
//	exer_3::CRect obj_3; //�Ű����� ���µ� ��ȣ ������ ��ȣ�� �̸����� ����
//
//	obj_1.prn();
//	obj_2.prn();
//	obj_3.prn();
//
//	return 0;
//}