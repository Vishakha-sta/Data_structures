#include<bits/stdc++.h>
using namespace std;


// void maxTillI(int arr[],int n,int max){
//     if(n){
//         max = arr[0];
//         cout<<max<<" ";
//     }
//     printMaxTillI(arr,n-1,max);
// }
 int max(int max,int i){
    return max>i?max:i;
 }

void printMaxTillI(int arr[],int n){
    int max_=INT16_MIN;
    for(int i=0;i<n;i++){
        max_ = max(max_,arr[i]);
        cout<<max_<<" ";
    }
    // maxTillI(arr,n,max);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    printMaxTillI(arr,n);   
    return 0;
}