#include <iostream>
using namespace std;

int main()
{
	// �� ������
	// >, <, >=, <= , ==, !=

	int Number = 0;
	Reinput:

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
		goto Reinput;
	}

	return 0;

}
