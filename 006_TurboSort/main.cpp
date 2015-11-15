//Merge Sort
//http://www.cprogramming.com/tutorial/computersciencetheory/sortcomp.html

#include<iostream>

using namespace std;

void Merge(int *, int, int, int);
void MergeSort(int *, int, int);

int main()
{
	int t;
	int i;

	cin >> t;

	int * n = new int[t];

	for (i = 0; i < t; i++)
	{
		cin >> n[i];
	}

	MergeSort(n, 0, t-1);

	for (i = 0; i < t; i++)
	{
		cout << n[i] << endl;
	}

	free(n);

#if defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif // _DEBUG

	system("PAUSE");
}

void MergeSort(int *i_n, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		MergeSort(i_n, low, mid);
		MergeSort(i_n, mid + 1, high);
		Merge(i_n, low, high, mid);
	}
	return;
}
void Merge(int *i_n, int low, int high, int mid)
{
	int i, j, k;
	i = low;
	k = low;
	j = mid + 1;

	int * scratch = new int[high];

	while (i <= mid && j <= high)
	{
		if (i_n[i] < i_n[j])
		{
			scratch[k] = i_n[i];
			k++;
			i++;
		}
		else
		{
			scratch[k] = i_n[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		scratch[k] = i_n[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		scratch[k] = i_n[j];
		k++;
		j++;
	}
	for (i = low; i < k; i++)
	{
		i_n[i] = scratch[i];
	}

	free(scratch);
}