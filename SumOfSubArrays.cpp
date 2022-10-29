// sum of all the subarrays in an array 
#include<bits/stdc++.h>
using namespace std;

void sumOfSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sumOfSubarray(arr,n);
    return 0;
}