class Solution {
   public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long int i,j,cntr=0;
        int prod=1;
        int n = nums.size();
        for(i=0,j=0;j<n;j++){
            prod *= nums[j];
            while(prod>=k && i<=j){
                prod/=nums[i++];
            }
            cntr+=(j-i+1);
        }
        return cntr;
    }
};