#include<iostream>

using namespace std;

int main()
{
	int nData = 10;

	int& ref = nData; // nData ������ ���� ������ ����

	ref = 20; // �������� ���� �����ϸ� ������ ����

	cout << nData << endl;

	int* pnData = &nData; // nData�� �ּ�
	*pnData = 30;
	cout << nData << endl;
}