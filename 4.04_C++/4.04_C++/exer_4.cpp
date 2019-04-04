#include <iostream>
#include <iomanip>


namespace exer_4 {
	class CRect {
	private:
		int left;
		int right;
		int top;
		int bottom;

	public:
		void prn();
		CRect(int l=0, int r=0, int t=0, int b=0);
		
	};

	void CRect::prn()
	{
		std::cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << std::endl;
	}

	CRect::CRect(int l, int t, int r, int b) : left(l), right(r), top(t), bottom(b) //������ ���ǽÿ��� ��� ������ �ʱ�ȭ �ɼ�
	{

	}


}



//int main()
//{
//	exer_4::CRect obj_1(20, 20, 20, 20);
//	exer_4::CRect obj_2(20, 20, 20);
//	exer_4::CRect obj_3(20, 20);
//	exer_4::CRect obj_4(20);
//	exer_4::CRect obj_5; //�Ű����� ���µ� ��ȣ ������ ��ȣ�� �̸����� ����
//
//	obj_1.prn();
//	obj_2.prn();
//	obj_3.prn();
//	obj_4.prn();
//	obj_5.prn();
//
//	return 0;
//}