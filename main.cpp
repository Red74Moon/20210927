#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//funtion ���� ���
//��ȯ��(int, float, bool, void, char) �Լ��̸�(����(void))
//{
// to do
//}
// 
//�Լ� ����
void Initialize();
void Shuffle();
void Disply();

int Number[10];

int main(int argc, char* args)
{
	//Initialize
	Initialize();

	//Shuffle
	Shuffle();
	
	//Display
	Disply();

	return 0;
}


void Initialize()
{
	for (int i = 0; i < 10; i++)
	{
		Number[i] = i + 1;
	}
}

void Shuffle()
{
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

		//	cout << Number[R] << endl;
	}
}

void Disply()
{
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
}