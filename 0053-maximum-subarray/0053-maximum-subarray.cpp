class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum = INT_MIN;
        
        for(int right = 0;right<nums.size();right++){
            sum = sum+nums[right];
            maxsum = max(sum,maxsum);
            if(sum < 0) sum =0;
        }
           
        return maxsum;
    }
};