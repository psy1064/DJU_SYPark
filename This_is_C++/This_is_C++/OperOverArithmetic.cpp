#include<iostream>
using namespace std;

class CMYdata {
	int m_nData = 0;
public:
	CMYdata(int nParam) : m_nData(nParam)
	{
		cout << "CMYdata(int)" << endl;
	} // 변환 생성자
	CMYdata(const CMYdata& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMYdata(const CMYdata& rhs)" << endl;
	} // 복사 생성자
	CMYdata(const CMYdata&& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMYdata(const CMYdata&& rhs)" << endl;
	} // 이동 생성자

	operator int() { return m_nData; } // 형변환

	CMYdata operator+(const CMYdata& rhs)
	{
		cout << "operator + " << endl;
		CMYdata result(0);
		result.m_nData = this->m_nData + rhs.m_nData;
		return result;
	} // + 연산자 함수
	CMYdata operator=(const CMYdata& rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData;
		return *this;
	} // = 연산자 함수
};

int main()
{
	cout << "******Begin******" << endl;
	CMYdata a(0), b(3), c(4);

	// b+c 연산을 실행하면 이름 없는 객체가 만들어지며
	// a에 대입하는 것은 이 임시 객체이다.
	a = b + c;
	cout << a << endl;
	cout << "*******End*******" << endl;

	return 0;
}