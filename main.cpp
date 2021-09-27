#include <iostream>
using namespace std;

int main()
{
	int Number[10];

	for (int i = 0; i < 10; i++)
	{
		Number[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
	return 0;

}
