#include <iostream>
using namespace std;

int main()
{
	// �Է¹��� ������ ���

	int num,i, j;
	cout << "����� �������� ��������(1~10) : ";
	cin >> num;

	for (j = 1; j < 10; j++)
	{
		cout << num << " * " << j << " = " << num * j << endl;
	}
	cout << endl << endl;

	// ������ ���

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j <<endl;
		}
		cout << endl;
	}



	return 0;

}
