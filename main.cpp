#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//함수 만들기

int Add(int First, int Second);
int Minus(int First, int Second);
int Mutifly(int First, int Second);
int Division(int First, int Second);

int main()
{
	int A = 10;
	int B = 5;

	cout << Add(A, B) << endl;
	cout << Minus(A, B) << endl;
	cout << Mutifly(A, B) << endl;
	cout << Division(A, B) << endl;

	return 0;
}

int Add(int First, int Second)
{
	return First + Second;
}

int Minus(int First, int Second)
{
	return First - Second;
}

int Mutifly(int First, int Second)
{
	return First * Second;
}

int Division(int First, int Second)
{
	return First / Second;
}