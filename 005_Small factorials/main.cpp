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
	int temp = 0;
	int digits = 1;
	int carry;
	int mul;
	int j; //Array Counter

	fact[0] = 1;

	for (mul = 2; mul <= i_num; mul++)
	{
		for (j = 0; j < digits; j++)
		{
			carry = fact[j] * mul + temp;
			fact[j] = carry % 10;
			temp = carry / 10;
		}

		while (temp > 0)
		{
			fact[digits] = temp % 10;
			temp = temp / 10;
			digits++;
		}
	}

	for (j = digits - 1; j >= 0; j--)
	{
		cout << fact[j];
	}
	cout << endl;
}