#include<iostream>

using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}

int TestFunc2(int = 10); // �Լ� ���� ���𿡼� �Ű����� �̸� ���� ����

int TestFunc3(int nParam1, int nParam2 = 2) // ����Ʈ ���� �ݵ�� �����ʺ��� ����ؾ� ��
{
	return nParam1 * nParam2;
}
int main()
{
	cout << TestFunc() << endl;  // ȣ���ڰ� ���μ��� �������� �ʾ����Ƿ� ����Ʈ �� ����
	cout << TestFunc(100) << endl; // ȣ���ڰ� ���μ��� ���������Ƿ� ����Ʈ �� ����

	cout << TestFunc2() << endl;
	cout << TestFunc2(100) << endl;

	cout << TestFunc3(10) << endl;
	cout << TestFunc3(10, 20) << endl;
	// ȣ���ڰ� �����ϴ� ���μ��� ��ȣ���� �Լ� �Ű������� ���ʺ��� ¦�� ����


	return 0;
}