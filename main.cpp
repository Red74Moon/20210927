#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// �迭 ���� �߻� ����

	int Number[10];
	for (int i = 0; i < 10; i++)
	{
		Number[i] = i + 1;
	}

	// ���� �ʱ�ȭ 0 ~ RAND_MAX
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		// 0 - 9
		int R = rand() % 10;
		// to do 

		int Temp = Number[i];
		Number[i] = Number[R];
		Number[R] = Temp;

		cout << Number[R] << endl;
	}
	cout << endl;
	// ���
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
	return 0;
}
