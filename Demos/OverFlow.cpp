

//Multiplies two numbers that cause an overflow in the result. 
//short int is a 16bit, 2 byte location
//300 * 300 = 90000  decimal
//12C * 12C = 15F90  hex
//The destination word will only hold the 5F90, truncating the upper order 1
//Therefore the result in S is 5F90, or 24,464

#include <iostream>

int main()
{

	short int q = 300;
	short int r = 300;
	short int s;

	s = q * r;

	std::cout << "Result(Decimal): " << s << std::endl << std::endl;
	
	std::cout << "Result(Hex): " << std::hex << s << std::endl << std::endl;

	std::cout << "Real Answer(Decimal): " << std::dec << 300 * 300 << std::endl << std::endl;

	std::cout << "Real Answer(Hex): " << std::hex << 300 * 300 << std::endl << std::endl;


	
}