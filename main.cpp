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
	// ������ ���� �ڵ�
	int Score = 0;
	char Grade = 'F';
Restart:

	cout << "������ �Է��ϼ��� (0~100) : ";
	cin >> Score;

	//����ó��

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
		cout << "�߸� �Է��Ͽ����ϴ�." << endl << endl;
		goto Restart;
	}
	else 
	{
		Grade = 'F';
	}
	cout << "������ " << Grade << " �Դϴ�." << endl;

	return 0;

}
