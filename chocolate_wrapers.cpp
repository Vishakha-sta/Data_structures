// vishakha have n rupees where 1 chocolate cost 1rs. 
// and there is a condition if she collect 3 chocolate wrappers then she will get one more chocolate 
// then you have to answer how many chocolates will she __GXX_MERGED_TYPEINFO_NAMES
// Ex. n = 15
// step - 1 -> she will get total = 15  chocolates
// step - 2 -> now she have 15 wrappers which when divided by 3 we get 5 so now total chocolates are 
//             total += 5 = 20
// step - 3 -> now she have 5 wrappers which when divided by 3 she get 1 chocolate and left with 2 wrappers
//             total += 1 = 21(1 wrappers of new chocolate) + 2(wrappers) 
// step - 4 -> so now she have 3 wrappers from which she can get one more chocolate
//             total += 1 = 22


#include<bits/stdc++.h>
using namespace std;

int totalChocolates(int n){
    int total = n,wChocolate=0;

    while(n>=3){
        wChocolate = n/3;
        total += wChocolate;
        n = n%3 + wChocolate;
    }
    return total;
}

int main()
{
    int n;
    cin>>n;
    cout<<totalChocolates(n);
    return 0;
}