#include<iostream>
using namespace std;

class USERDATA
{
public:
	int nAge;
	char szName[32];

	void print(void)
	{
		cout << nAge << szName << endl;
	}
};

int main()
{
	USERDATA user = { 10, "name" };
	user.print();
	cout << user.nAge << user.szName << endl; // public ���� ����� ������ ���� ����
}