#include<iostream>
using namespace std;

class CMyData
{
	int m_nData;
	// 기본 접근 제어 지시자는 private
public:
	int GetData()
	{
		return m_nData;
	}
	void SetData(int nParam)
	{
		m_nData = nParam;
	}
};

int main()
{
	CMyData data;
	data.SetData(10);
	//data.m_nData = 10; 는 불가능
	cout << data.GetData() << endl;
	return 0;
}