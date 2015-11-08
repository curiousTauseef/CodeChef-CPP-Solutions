#include<iostream>

using namespace std;

int main()
{
	int i_num;
	cin >> i_num;

	while (i_num != 42)
	{
		cout << i_num << endl;
		cin >> i_num;
	}
	return 0;
}