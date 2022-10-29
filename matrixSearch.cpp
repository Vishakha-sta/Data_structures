#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;
    int r=0,c=m-1;
    bool flag=false;
    while(c>=0 && r<n){
        if(arr[r][c]==k){
            flag= true;
            break; 
        }
        else if(k>arr[r][c]){
            r++;
        }
        else{
            c--;
        }
    }
    if(flag){
        cout<<"Found!";
    }
    else cout<<"not Found!";
    return 0;
}