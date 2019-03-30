#include <iostream>
#include "BitwiseMath.h"


int main()
{
	int addition = BitwiseMath::Adder(22, 4);
	int substraction = BitwiseMath::Substractor(200, 111);
	
	std::cout << "Addition of 22 and 4: " << addition << std::endl;
	std::cout << "Substraction" << substraction << std::endl;

	system("pause");
}