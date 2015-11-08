#include <iostream>

using namespace std;

int main()
{
	int numberOfInputs;
	int num;
	int numberOfZeros = 0;

	cin >> numberOfInputs;

	for (int i = 0; i < numberOfInputs;i++)
	{
		numberOfZeros = 0;
		cin >> num;
		//Number of zeros in a factorial of a number N is equal to the number of times 5 is a factor of N
		//No need to calculate factorial and then find zeros in it
		while (num > 0)
		{
			numberOfZeros += num / 5;
			num = num / 5;
		}
		cout << numberOfZeros << endl;
	}

	system("PAUSE");
	return 0;
}