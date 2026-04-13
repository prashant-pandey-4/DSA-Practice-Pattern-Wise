class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        double maxavg=INT_MIN;


        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double avg = sum/k;
        maxavg = avg;

        for(int i=k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];
            avg = sum/k;
            maxavg = max(avg,maxavg);
        }
        return maxavg;
    }
};