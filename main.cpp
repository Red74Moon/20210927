#include <iostream>
using namespace std;

int main()
{
	// �Է¹��� ������ ���

	int Number = 0;
	int i = 0;
	int j = 0;

	cout << "����� �������� ��������(1~10) : ";
	cin >> Number;

	for (i = 1; i <= 9; i++)
	{
		cout << Number << " * " << i << " = " << Number * i << endl;
	}
	cout << endl << endl;

	// ������ ��� ���η� ���

	for (i = 2; i <=9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j <<endl;
		}
		cout << endl;
	}

	// ������ ���η� 3���� ��� (���� �̿ϼ�)

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 4; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
			j += 3;
		}
		cout << endl;
	}

	return 0;

}
