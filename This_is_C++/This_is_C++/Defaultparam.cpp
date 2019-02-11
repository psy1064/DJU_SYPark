#include<iostream>

using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}
int main()
{
	cout << TestFunc() << endl;  // 호출자가 실인수를 기입하지 않았으므로 디폴트 값 적용

	cout << TestFunc(100) << endl; // 호출자가 실인수를 기입했으므로 디폴트 값 무시

	return 0;
}