class Solution {
    public int longestNiceSubarray(int[] nums) {
        int len = nums.length, mask = 0, ans = 0, left = 0, cur = 0;
        for(int right = 0; right<len; right++){
            while((mask & nums[right]) != 0){
                mask^=nums[left];
                left++;
            }
            mask |= nums[right];
            cur = right-left+1;
            if(ans < cur){
                ans = cur;
            }
        }
        return ans;
    }
}