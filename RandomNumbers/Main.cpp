#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned int seed = time(0);
	srand(seed);
	int y = rand();
	int x = rand();

	int minValue = 1;
	int maxValue = 52;
	for (int i = 1; i < 6; i++)
	{
		cout << (rand() % (maxValue - minValue + 1)) + minValue << endl;
	}
}