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

	//숫자 섞기 (shuffle)
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
	// 출력
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
	return 0;
}
