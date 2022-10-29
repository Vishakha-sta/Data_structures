#include<bits/stdc++.h>
using namespace std;

int pairSum(int arr[],int n,int k){
    int i=0,j=n-1;
    while(j>i){
        if(arr[i] + arr[j] == k){
            // cout<<i<<" "<<j<<endl;
            return 1;
        }
        else if(arr[i]+arr[j] > k){
            j--;
        }
        else {
            i++;
        }
    }
    return 0;
}

int main()
{
    int n;
    // cin>>n;
    n= 8;
    int arr[n] = {2, 4, 7, 11, 14, 16, 20, 21};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    sort(arr,arr+n);
    int k;
    // cin>>k;
    k=31;
    cout<<pairSum(arr,n,k);
    return 0;
}