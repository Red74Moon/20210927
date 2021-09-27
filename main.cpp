#include <iostream>
using namespace std;

int main()
{
	// 비교 연산자
	// >, <, >=, <= , ==, !=

	int Number = 0;
	Reinput:

	cout << "출력할 구구단을 입력새 주세요 : ";
	cin >> Number;

	// 논리연산자
	// AND &&
	// OR ||
	// NOT !
	if (1 <= Number && Number <= 9)
	{
		cout << "구구단에 접합한 수입니다." << endl;
	}
	else
	{
		cout << "다시 입력해 주세요 (1~9)" << endl;
		goto Reinput;
	}

	return 0;

}
