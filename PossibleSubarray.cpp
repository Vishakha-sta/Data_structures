#include<bits/stdc++.h>
using namespace std;

void printPossibleSubarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
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
    printPossibleSubarrays(arr,n);
    return 0;
}