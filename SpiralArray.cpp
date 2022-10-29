#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    n =5;m=5;
    // cin>>n>>m;
    int arr[n][m] = {{1,2,3,4,5},{16,17,18,19,6},{15,24,25,20,7},{14,23,22,21,8},{13,12,11,10,9}};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin<<arr[i][j];
    //     }
    // }

    int col_start=0, col_end=n-1, row_start=0, row_end=n-1;

    while(row_start<=row_end && col_start<=col_end){
        //for first row row_Start
        for( int col=col_start;col<=col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //for last column col_end
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        // for last row row_end
        for(int col=col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        // for first column col_start 
        for(int row = row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}