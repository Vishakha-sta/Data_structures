#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
	long long prod = 1, maxProd = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		prod *= arr[i];
		if(prod>maxProd)
		{
		    maxProd = prod;
		}
		if (prod == 0)
		{
			prod = 1;
		}

	}
    prod=1;
    for(int i=n-1;i>=0;i--){
        prod *=arr[i];
        if(prod>maxProd){
            maxProd = prod;
        }
        if(prod==0){
            prod=1;
        }
    }

	return maxProd;
}
int main()
{
	int n = 5;
	vector<int> arr{0, 0, -5, 0, 0};
	cout << maxProduct(arr, n);
	return 0;
}