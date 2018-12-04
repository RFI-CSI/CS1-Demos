/*
  Examples of declaring variables and data types
*/

#include <string>
using namespace std;

int main()
{
	short int A = 32678;								//range -32768 to + 32767 (2 bytes, 16 bits)
	unsigned int B = 65535;								//range 0 to 65535; (2 bytes, 16 bits)
	int C = 2147483648;									//range -2147483648 to + 2147483647 (4 bytes, 32 bits)
	unsigned int D = 4294967295;						//range 0 to 4294967295 ( 4 bytes, 32 bits)
														//long int is same as int in this case, but not always
	long long int E = 9223372036854775808;				//range -9223372036854775808 to + 9223372036854775807 (8 bytes, 64 bits)
	unsigned long long int F = 18446744073709551615;	//range 0 to 18446744073709551615 (8 bytes, 64 bits

	float Pi = 3.141592654;								//range +-3.4E-38 to +-3.4E38

	double PiA = 3.14E5;								//range +-1.7E-308 to +-1.7E308

	const float PiB = 3.141592654;						//makes PiB a constant

	char firstChar = 'A';
	string name = "AAA";


}