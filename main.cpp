#include <iostream>
using namespace std;

int main()
{
	// �� ������
	// >, <, >=, <= , ==, !=

	int Number = 0;
	cout << "����� �������� �Է»� �ּ��� : ";
	cin >> Number;

	// ��������
	// AND &&
	// OR ||
	// NOT !
	if (1 <= Number && Number <= 9)
	{
		cout << "�����ܿ� ������ ���Դϴ�." << endl;
	}
	else
	{
		cout << "�ٽ� �Է��� �ּ��� (1~9)" << endl;
	}

	return 0;

}
