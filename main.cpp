#include <iostream>
using namespace std;

int main()
{
	// 숫자를 입력받아서 짝수, 홀수 를 판별하는 프로그램을 작성
	
	int Number = 0;

	cout << "판별할 숫자를 입력하세요 : ";
	cin >> Number;

	if ((Number % 2) == 0)
	{
		cout << "짝수 입니다." << endl;
	}
	else
	{
		cout << "홀수 입니다." << endl;
	}

	return 0;

}
