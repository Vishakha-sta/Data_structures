// Problem : Vishakha is given the number of visitors at herlocal theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
// * The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// * Either it is the last day, or the number of visirors on the day is strictly larger than the number of visitors on the following day.

// Note that hte very first day could be a record breaking day!
// Please help Vishakha find out the number of record breaking days.

#include<bits/stdc++.h>
using namespace std;

void recordBreakingDay(int arr[],int n){
    int max=arr[0];
    if(arr[0]>arr[1])
    cout<<"y ";
    else cout<<"n ";
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            if(arr[i]>arr[i+1])
                cout<<"y ";
            else if(i+1 == n)
                cout<<"y ";
            else
                cout<<"n ";
        }
        else
            cout<<"n ";
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    

cout<<endl;
    recordBreakingDay(arr,n);
    return 0;
}