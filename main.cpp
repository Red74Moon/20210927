#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// 배열 난수 발생 섞기

	int Number[10];
	for (int i = 0; i < 10; i++)
	{
		Number[i] = i + 1;
	}

	// 난수 초기화 0 ~ RAND_MAX
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
	// 출력
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
	return 0;
}
