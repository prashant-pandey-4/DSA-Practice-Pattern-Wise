class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg, pos;

        // split
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        // square
        for(int i = 0; i < neg.size(); i++){
            neg[i] = neg[i] * neg[i];
        }
        for(int i = 0; i < pos.size(); i++){
            pos[i] = pos[i] * pos[i];
        }

        // reverse neg (important)
        reverse(neg.begin(), neg.end());

        // merge
        int i = 0, j = 0;
        vector<int> res;

        while(i < neg.size() && j < pos.size()){
            if(neg[i] <= pos[j]){
                res.push_back(neg[i++]);
            } else {
                res.push_back(pos[j++]);
            }
        }

        while(i < neg.size()) res.push_back(neg[i++]);
        while(j < pos.size()) res.push_back(pos[j++]);

        return res;
    }
};