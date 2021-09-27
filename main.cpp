#include <iostream>
using namespace std;

int main()
{
	// 입력받은 구구단 출력

	int num,i, j;
	cout << "출력할 구구단을 적으세요(1~10) : ";
	cin >> num;

	for (j = 1; j < 10; j++)
	{
		cout << num << " * " << j << " = " << num * j << endl;
	}
	cout << endl << endl;

	// 구구단 출력

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
