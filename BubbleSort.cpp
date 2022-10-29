#include <bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
          
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    Bubble_sort(arr, n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}