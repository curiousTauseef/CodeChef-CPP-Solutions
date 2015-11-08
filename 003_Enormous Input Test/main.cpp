#include <iostream>

using namespace std;

int main()
{
	int n;
	int k;
	int t;
	int numOfDivisible = 0;

	cin >> n >> k;

	while (n > 0)
	{
		cin >> t;
		if (t%k == 0)
		{
			numOfDivisible++;
		}
		n--;
	}

	cout << numOfDivisible << endl;

	system("PAUSE");
	return 0;
}