#include <iostream>
using namespace std;

int main()
{
	// ������ �Է� �޾Ƽ�
	// 100 - 90 A
	// 90 - 80 B
	// 80 - 70 C
	// 70 - 60 D
	// 60 - F
	
	int Score = 0;

	cout << "������ �Է��ϼ��� (0~100) : ";
	cin >> Score;

	if (Score <= 100 && Score >= 90 )
	{
		cout << "������ " << " A " << " �Դϴ�." << endl;
	}
	else if (Score < 90 && Score >= 80)
	{
		cout << "������ " << " B " << " �Դϴ�." << endl;
	}
	else if (Score < 80 && Score >= 70)
	{
		cout << "������ " << " C " << " �Դϴ�." << endl;
	}
	else if (Score < 70 && Score >= 60)
	{
		cout << "������ " << " D " << " �Դϴ�." << endl;
	}
	else if (Score > 101 || Score < 0)
	{
		cout << "�߸� �Է��Ͽ����ϴ�." << endl;
	}
	else 
	{
		cout << "������ " << " F " << " �Դϴ�." << endl;
	}

	return 0;

}
