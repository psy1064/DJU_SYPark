#include<iostream>
using namespace std;

class CMyData
{
	int m_nData;
	// �⺻ ���� ���� �����ڴ� private
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
	//data.m_nData = 10; �� �Ұ���
	cout << data.GetData() << endl;
	return 0;
}