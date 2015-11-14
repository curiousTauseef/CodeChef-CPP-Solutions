//Bubble Sort
//http://www.cprogramming.com/tutorial/computersciencetheory/sortcomp.html

#include<iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	int * n = new int[t];

	for (int i = 0; i < t; i++)
	{
		cin >> n[i];
	}

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t-1; j++)
		{
			if (n[j + 1] > n[j])
			{
				int temp = n[j + 1];
				n[j + 1] = n[j];
				n[j] = temp;
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		cout << n[i] << endl;
	}

	system("PAUSE");
}