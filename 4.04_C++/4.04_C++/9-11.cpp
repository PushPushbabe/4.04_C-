#include <iostream>
#include <string>

namespace ex9_11 {
	class CStud {
	private :
		char * name;
		char * handphone;
		char * email;
		static int cnt;
	public:
		CStud(const char * name = "Defaultname", const char * handphone = "02-111-1111", const char * email = "testmail@test.com");
		void SetStud(const char *, const char * ,const char*);
		void PrintStud() const;
		void static PrintCount();
		~CStud();
	};

	int CStud::cnt = 0;

	CStud::CStud(const char * _name, const char * _handphone, const char * _email)
	{
		cnt++;

		int num=0;
		num = strlen(_name);		
		name = new char[num+1];
		strcpy_s(name,num+1, _name);
		

		num = strlen(_handphone);
		handphone = new char[num+1];
		strcpy_s(handphone, num+1, _handphone);


		num = strlen(_email);
		email = new char[num+1];
		strcpy_s(email, num+1, _email);
		
	}

	void CStud::SetStud(const char * _name,const  char* _handphone,const char * _email)
	{
		int num = 0;
		num = strlen(_name);
		
		name = new char[num + 1];
		strcpy_s(name, num + 1, _name);


		num = strlen(_handphone);
		handphone = new char[num + 1];
		strcpy_s(handphone, num + 1, _handphone);


		num = strlen(_email);
		email = new char[num + 1];
		strcpy_s(email, num + 1, _email);


	}

	void CStud::PrintStud() const
	{
		std::cout << this->name << " " << this->handphone << " " << this->email << std::endl;

	}

	void  CStud::PrintCount()
	{
		std::cout << "\n카운트값은 " << cnt << "입니다." << std::endl;
	}

	CStud::~CStud()
	{
		cnt--;
	}

}
using namespace ex9_11;
//
//int main()
//{
//	ex9_11::CStud s1, s2;
//
//	s1.SetStud("손찬종", "02-446-2310", "chanjong10@naver.com");
//
//	s1.PrintStud();
//	s2.PrintStud();
//
//	CStud::PrintCount();
//	return 0;
//}
