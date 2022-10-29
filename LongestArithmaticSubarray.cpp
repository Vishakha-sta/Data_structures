#include<bits/stdc++.h>
using namespace std;

int LongestArithmaticSubarray(int arr[],int n){
    int pd,curr,ans;
    pd = arr[1] - arr[0];
    curr = 2;
    ans=0;
    for(int i=1;i<n-1;i++){
        if(pd == arr[i+1]-arr[i])
            curr++;
        else{
            pd = arr[i+1] - arr[i];
            curr = 2;
            }
        ans = max(curr,ans);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LongestArithmaticSubarray(arr,n);
    return 0;
}