#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    long long n,k;
    long long nums[] = {1,2,3,4,5,6,8,7,10,15,14,17,16,12,20,145,37,29};
    n = sizeof(nums)/sizeof(nums[0]);
    // for (int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    // nums[n] = 
    sort(nums,nums+n);
    cout<<"Enter the no of elements U wanna display:-";
    cin>>k;
    cout<<k<<" Largest Elements are: ";
    for (int i=n-1;i>=n-k;i--){
        cout<<nums[i]<<",";
    }
    return 0;
}