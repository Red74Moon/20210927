#include <iostream>
using namespace std;

int main()
{
	// 입력받은 구구단 출력

	int Number = 0;
	int i = 0;
	int j = 0;

	cout << "출력할 구구단을 적으세요(1~10) : ";
	cin >> Number;

	for (i = 1; i <= 9; i++)
	{
		cout << Number << " * " << i << " = " << Number * i << endl;
	}
	cout << endl << endl;

	// 구구단 출력 새로로 출력

	for (i = 2; i <=9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j <<endl;
		}
		cout << endl;
	}

	// 구구단 가로로 3개씩 출력 (아직 미완성)

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
