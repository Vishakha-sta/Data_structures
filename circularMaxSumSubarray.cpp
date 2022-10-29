#include<bits/stdc++.h>
using namespace std;

int kaden(int arr[],int n){
    int currentSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum>maxSum)
            maxSum = currentSum;
        if(currentSum<0)
            currentSum = 0; 

    }
    return max(maxSum,currentSum);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nonWrapSum = kaden(arr,n);
    int wrapSum=0;
    int total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum = total + kaden(arr,n);
    cout<<max(wrapSum,nonWrapSum);
    return 0;
}