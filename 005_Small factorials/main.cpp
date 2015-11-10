#include <iostream>

using namespace std;

void factorial(int);

int main()
{
	int numberOfInputs;
	int num;

	cin >> numberOfInputs;

	for (int i = 0; i < numberOfInputs; i++)
	{
		cin >> num;
		factorial(num);
		//cout << factorial(num) << endl;
	}

	system("PAUSE");
	return 0;
}

void factorial(int i_num)
{
	int fact[200];

	for (int i = 2; i <= i_num; i++)
	{
		fact *= i;
	}

	cout << fact << endl;

	//return fact;
}