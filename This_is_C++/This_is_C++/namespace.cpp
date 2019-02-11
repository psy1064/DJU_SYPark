#include<iostream>
using namespace std;

namespace TEST
{
	int g_nData = 10;

	void TestFunc()
	{
		cout << "Test::TestFunc" << endl;
	}
	namespace DEV
	{
		int g_nData = 20;
		namespace WIN
		{
			int g_nData = 30;
		}
	}
}

using namespace TEST;
int main()
{
	TEST::TestFunc();
	cout << TEST::g_nData << endl;

	TestFunc();
	cout << g_nData << endl;
	// using namespace �Ŀ��� namespace ���� ����

	cout << TEST::g_nData << endl;
	cout << TEST::DEV::g_nData << endl;
	cout << TEST::DEV::WIN::g_nData << endl;
	// ���� �ÿ��� namespace�� ��Ȯ�� ����ؾ� ��
}