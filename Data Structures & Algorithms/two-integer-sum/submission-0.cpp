class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            int diff = target - nums[i];
            if(mpp.find(diff)!=mpp.end())
            {
                ans.push_back(mpp[diff]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};
