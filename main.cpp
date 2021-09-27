#include <iostream>
#include "Utility.h"

using namespace std;

//함수 파일로 나누어 만들기

int main()
{
	int A = 10;
	int B = 5;

	cout << Add(A, B) << endl;
	cout << Minus(A, B) << endl;
	cout << Mutifly(A, B) << endl;
	cout << Division(A, B) << endl;
	cout << Mod(A, B) << endl;

	return 0;
}
