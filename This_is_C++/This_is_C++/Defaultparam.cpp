#include<iostream>

using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}

int TestFunc2(int = 10); // 함수 원형 선언에서 매개변수 이름 생략 가능

int TestFunc3(int nParam1, int nParam2 = 2) // 디폴트 값은 반드시 오른쪽부터 기술해야 함
{
	return nParam1 * nParam2;
}
int main()
{
	cout << TestFunc() << endl;  // 호출자가 실인수를 기입하지 않았으므로 디폴트 값 적용
	cout << TestFunc(100) << endl; // 호출자가 실인수를 기입했으므로 디폴트 값 무시

	cout << TestFunc2() << endl;
	cout << TestFunc2(100) << endl;

	cout << TestFunc3(10) << endl;
	cout << TestFunc3(10, 20) << endl;
	// 호출자가 설정하는 실인수는 피호출자 함수 매개변수의 왼쪽부터 짝을 맞춤


	return 0;
}