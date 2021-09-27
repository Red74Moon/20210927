#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Number[10];
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


//funtion 

//반환형(int, float, bool, void, char) 함수이름(인자(void))
//{
// to do
//}

int main()
{
	// 초기화
	Initialize();

	Shuffle();
	
	//Display
	// 출력
	Disply();

	return 0;
}
