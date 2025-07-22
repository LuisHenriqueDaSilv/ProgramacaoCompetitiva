class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        int currentSum = 0;
        int r= 0, l= 0, n=nums.size();
        vector<int> hash(10001, -1);
        
        while(r<n){
            if(hash[nums[r]] != -1){
                while(l<= hash[nums[r]]){
                    currentSum-=nums[l];
                    l++;
                }
            }

            currentSum+=nums[r];
            ans = max(currentSum, ans);
            hash[nums[r]] = r;
            r++;
        }
        return ans;
    }
};