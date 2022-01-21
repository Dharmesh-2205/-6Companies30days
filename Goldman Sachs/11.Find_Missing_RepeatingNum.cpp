// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int rep,miss_no;
        sort(arr,arr+n);
        int *arr2 = new int(2);
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                rep = arr[i];
                //break;
            }
            if (binary_search(arr,arr+n,i+1)){
                continue;
            }
            else{
                miss_no = i+1;
            }
        } 
        arr2[0] = rep;
        arr2[1] = miss_no;
        return arr2;
        // return rep;
        // return miss_no;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends