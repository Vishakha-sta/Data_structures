#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
	long long prod = 1, maxProd = INT_MIN, negProd = 1;

	for (int i = 0; i < n; i++)
	{

		if (arr[i] >= 0)
		{
			prod *= arr[i];
		}
		negProd *= arr[i];
		prod = max(prod, negProd);

		// if(prod>maxProd)
		if (!((prod == 1) && (arr[i] <= 0)) && (maxProd < prod))
		{
			\ maxProd = prod;
		}
		if (prod == 0)
		{
			prod = 1;
		}
		if (negProd == 0)
		{
			negProd = 1;
		}
		cout << maxProd << " ";
	}
	return maxProd;
}
int main()
{
	int n = 5;
	vector<int> arr{8, 2, -4, 6, 5};
	cout << maxProduct(arr, n);
	return 0;
}