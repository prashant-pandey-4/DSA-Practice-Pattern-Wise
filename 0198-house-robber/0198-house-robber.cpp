class Solution {
public:
    // int f(int i,vector<int>& nums,vector<int>& dp){

    //     if(i == 0) return nums[i];
    //     if(i < 0) return 0;
    //     if(dp[i] != -1) return dp[i];
    //     int pick = nums[i] + f(i-2,nums,dp);
    //     int nopick = 0 + f(i-1,nums,dp);
    //     return dp[i] = max(pick,nopick);
    // }
    int rob(vector<int>& nums) {
        int n= nums.size();
        int prev = nums[0];
        int prev2=0;
            for(int i=1;i<n;i++){
            int pick = nums[i] + prev2;
            int notpick = prev;
            int current = max(pick,notpick);
                prev2 = prev;
                prev = current;
        }
        return prev;
    }
};