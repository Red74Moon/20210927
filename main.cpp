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

	cout << "성적을 입력하세요 (0~100) : ";
	cin >> Score;

	//성적처리 switch-case

	switch (Score /10)
	{
		case 10: 
		case 9:
		{
			Grade = 'A';
			break;
		}
		case 8:
		{
			Grade = 'B';
			break;
		}
		case 7:
		{
			Grade = 'C';
			break;
		}
		case 6:
		{
			Grade = 'D';
			break;
		}
		default:
		{
			Grade = 'F';
			break;
		}
	}
	cout << "성적은 " << Grade << " 입니다." << endl;

	return 0;

}
