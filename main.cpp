#include <iostream>
using namespace std;

int main()
{
	// ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ�� �� �Ǻ��ϴ� ���α׷��� �ۼ�
	
	int Number = 0;

	cout << "�Ǻ��� ���ڸ� �Է��ϼ��� : ";
	cin >> Number;

	if ((Number % 2) == 0)
	{
		cout << "¦�� �Դϴ�." << endl;
	}
	else
	{
		cout << "Ȧ�� �Դϴ�." << endl;
	}

	return 0;

}
