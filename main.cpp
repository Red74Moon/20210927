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
	
	int Score = 0;

	cout << "성적을 입력하세요 (0~100) : ";
	cin >> Score;

	if (Score >= 90 && Score <= 100 )
	{
		cout << "성적은 " << " A " << " 입니다." << endl;
	}
	else if (Score >= 80 && Score < 90)
	{
		cout << "성적은 " << " B " << " 입니다." << endl;
	}
	else if (Score >= 70 && Score < 80)
	{
		cout << "성적은 " << " C " << " 입니다." << endl;
	}
	else if (Score >= 60 && Score < 70)
	{
		cout << "성적은 " << " D " << " 입니다." << endl;
	}
	else
	{
		cout << "성적은 " << " F " << " 입니다." << endl;
	}

	return 0;

}
