#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    n = 5;
    m = 5;
    // cin>>n>>m;
    int arr[n][m] = {
        {1, 2, 3, 4, 5},      // 00 01 02 03 04
        {6, 7, 8, 9, 10},     // 10 11 12 13 14
        {11, 12, 13, 14, 15}, // 20 21 22 23 24
        {16, 17, 18, 19, 20}, // 30 31 32 33 34
        {21, 22, 23, 24, 25}  // 40 41 42 43 44
    };
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin<<arr[i][j];
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}