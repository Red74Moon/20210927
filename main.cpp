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

	cout << "������ �Է��ϼ��� (0~100) : ";
	cin >> Score;

	//����ó�� switch-case

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
	cout << "������ " << Grade << " �Դϴ�." << endl;

	return 0;

}
