#include "BitwiseMath.h"



BitwiseMath::BitwiseMath()
{
}


BitwiseMath::~BitwiseMath()
{
}

int BitwiseMath::Adder(int firstNumber, int secondNumber)
{
	int carry;
	do
	{
		carry = (firstNumber & secondNumber) << 1;
		firstNumber = firstNumber ^ secondNumber;
		secondNumber = carry;		
	} while (secondNumber != 0);
	
	return firstNumber;
}

int BitwiseMath::Substractor(int firstNumber, int secondNumber)
{
	do
	{
		firstNumber = firstNumber ^ secondNumber;
		secondNumber = (firstNumber & secondNumber) << 1;
	} while (secondNumber != 0);

	return firstNumber;
}
