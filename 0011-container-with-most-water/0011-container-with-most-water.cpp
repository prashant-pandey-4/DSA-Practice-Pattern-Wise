class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int maxi =0;
        int left=0,right = n;
        while(left < right){
            int area = (right-left) * min(height[left],height[right]);
            maxi = max(area,maxi);

            if(height[left] <= height[right]) left++;
            else right--;
        }
        return maxi;
    }
};