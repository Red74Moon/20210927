#include <iostream>
#include "Utility.h"

using namespace std;

//pointer
//선언
//변수* = int*, char* ->주소값 -> 메모리 위치 가르키는 화살표
//사용법
//*변수 = *First -> 화살표가 가르키는 메모리 위치의 값
//&변수 = 변수의 메모리 위치(번지, Address)

//function, call by value 에서 (* pointer)를 만들어서 구현
//Call by Value로 Call by Refercen 구현
void Swap(int* First, int* Second)
{
	int Temp = *First;
	*First = *Second;
	*Second = Temp;
}

int main()
{
	int First = 4;
	int Second = 5;

	cout << First << endl;
	cout << Second << endl;

	Swap(&First, &Second);

	cout << endl << "Swap 이후 " << endl << endl;

	int* PA = &First;

	cout << First << endl;
	cout << Second << endl;
	cout << *PA << endl;

	return 0;
}
