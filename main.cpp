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
Restart:

	cout << "성적을 입력하세요 (0~100) : ";
	cin >> Score;

	if (Score <= 100 && Score >= 90 )
	{
		cout << "성적은 " << " A " << " 입니다." << endl;
	}
	else if (Score < 90 && Score >= 80)
	{
		cout << "성적은 " << " B " << " 입니다." << endl;
	}
	else if (Score < 80 && Score >= 70)
	{
		cout << "성적은 " << " C " << " 입니다." << endl;
	}
	else if (Score < 70 && Score >= 60)
	{
		cout << "성적은 " << " D " << " 입니다." << endl;
	}
	else if (Score > 101 || Score < 0)
	{
		cout << "잘못 입력하였습니다." << endl << endl;
		goto Restart;
	}
	else 
	{
		cout << "성적은 " << " F " << " 입니다." << endl;
	}

	return 0;

}
