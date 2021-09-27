#include "Utility.h"


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

int Mod(int First, int Second)
{
	return First % Second;
}

void Swap(int* First, int* Second)
{
	int Temp = *First;
	*First = *Second;
	*Second = Temp;
}