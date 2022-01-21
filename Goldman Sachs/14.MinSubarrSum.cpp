class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long i=0,j=0;
        long long sum = 0;
        long long n = nums.size();
        long long minLen = n+1;
        //for (j=0;j<n;j++){
         while(j<n){
            while(sum<target && j<n){
                sum+=nums[j++];
            }
            while(sum>=target && i<n){
                if(j-i<minLen){
                    minLen = min(minLen,j-i);
                }
                sum-=nums[i++];
            }
        }
        if (minLen == nums.size()+1){
            return 0;
        }
        return minLen;
    }
};