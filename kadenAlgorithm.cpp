#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int mxSum=INT_MIN,CurrSum=0;
    for(int i=0;i<n;i++){
        CurrSum = CurrSum + arr[i];
        if(CurrSum > mxSum){
            mxSum = CurrSum;
        }
        if(CurrSum<0){
            CurrSum = 0;
        }
    }
    return mxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSum(arr,n);
    return 0;
}