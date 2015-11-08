#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i_transaction;
	float i_balance;

	cin >> i_transaction >> i_balance;

	if (i_transaction % 5 == 0 && i_transaction + 0.50 < i_balance)
	{
		i_balance -= i_transaction + 0.50;
	}

	cout << setprecision(2) << fixed << i_balance << endl;

	system("PAUSE");
	return 0;
}