#include <iostream>
using namespace std;

int main()
{
	// 성적을 입력 받아서
	// 100 - 90 A
	// 90 - 80 B
	// 80 - 70 C
	// 70 - 60 D
	// 60 - F
	// 선생님 도움 코드
	int Score = 0;
	char Grade = 'F';
Restart:

	cout << "성적을 입력하세요 (0~100) : ";
	cin >> Score;

	//성적처리

	if (Score <= 100 && Score >= 90 )
	{
		Grade = 'A';
	}
	else if (Score < 90 && Score >= 80)
	{
		Grade = 'B';
	}
	else if (Score < 80 && Score >= 70)
	{
		Grade = 'C';
	}
	else if (Score < 70 && Score >= 60)
	{
		Grade = 'D';
	}
	else if (Score > 101 || Score < 0)
	{
		cout << "잘못 입력하였습니다." << endl << endl;
		goto Restart;
	}
	else 
	{
		Grade = 'F';
	}
	cout << "성적은 " << Grade << " 입니다." << endl;

	return 0;

}
