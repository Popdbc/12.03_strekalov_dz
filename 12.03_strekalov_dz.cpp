#include <iostream>
#include"time.h"
using namespace std;
int main()
{
	int const n = 10, a = 10, b = 20;
	int mass1[n], mass2[n], result[n];
	srand(time(NULL));
	cout << "1st + 2nd = result\n";
	for (int i = 0; i < n; i++)
	{
		mass1[i] = a + rand() % 10;
		mass2[i] = a + rand() % 10;
		result[i] = mass1[i] + mass2[i];
		cout << mass1[i] << " + " << mass2[i];
		cout << " = " << result[i] << "\n";
	}
	return 0;
}