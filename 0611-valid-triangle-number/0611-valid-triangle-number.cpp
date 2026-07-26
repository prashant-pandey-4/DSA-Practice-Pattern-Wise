class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size() -1;
        
        int count=0;

        for(int k=n;k >= 2;k--){
            int  left = 0, right = k-1;
            while(left < right){
                if(nums[left] + nums[right] > nums[k]){
                count += right -left;
                right--;
                }
                else left++;
            }
        }
        return count;
    }
};