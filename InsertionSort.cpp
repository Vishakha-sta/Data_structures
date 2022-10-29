#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;    
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int n;
    cout << "enter no. of elements : ";
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
    insertion_sort(arr, n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}