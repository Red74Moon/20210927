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

	//���� ���� (shuffle)
	for (int i = 0; i < 10; i++)
	{
		// 0 - 9
		int R = rand() % 10;
		// to do 
		int R2 = rand() % 10;

		int Temp = Number[R];
		Number[R] = Number[R2];
		Number[R2] = Temp;

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
