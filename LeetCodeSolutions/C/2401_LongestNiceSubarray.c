int longestNiceSubarray(int* nums, int numsSize) {
    int ans = 0, cur =0, left = 0, mask = 0;
    for(int right = 0; right < numsSize; right ++){
        while((mask & nums[right]) != 0){
            mask^=nums[left];
            left++;
        }
        mask|=nums[right];
        int cur = right - left+1;
        ans = cur>ans?cur:ans;
    }
    return ans;
}
