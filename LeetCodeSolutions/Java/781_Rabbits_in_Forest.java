class Solution {
    public int numRabbits(int[] answers) {
        int n = answers.length;
        int ans = 0;
        int[] freq = new int[1000];
        for(int i = 0; i<n; i++){
            int x = answers[i];
            ans+=(freq[x]++%(x+1) == 0)?(x+1):0;
        }
        return ans;
    }
}