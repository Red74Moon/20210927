#include <iostream>
#include "Utility.h"

using namespace std;

//pointer
//����
//����* = int*, char* -> �ּҰ� -> �޸� ��ġ ����Ű�� ȭ��ǥ
//����
//*���� = *First -> ȭ��ǥ�� ����Ű�� �޸� ��ġ�� ��
//&���� = ������ �޸� ��ġ(����, Address)

//function, call by value ���� (* pointer)�� ���� ����
//Call by Value�� Call by Refercen ����


int main()
{
	int First = 4;
	int Second = 5;

	cout << First << endl;
	cout << Second << endl;

	Swap(&First, &Second);

	cout << endl << "Swap ���� " << endl << endl;

	int* PA = &First;

	cout << First << endl;
	cout << Second << endl;
	cout << *PA << endl;

	return 0;
}
