class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod1 = 1;
        int prod = 1;
        int cnt = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cnt++;
            }
        }
        vector<int>ans1(n,0);
        if(cnt>1)
        {
            return ans1;
        }
        for(int i = 0;i<n;i++)
        {
            prod*=nums[i];
            if(nums[i]!=0)
            {
                prod1*=nums[i];
            }
        }
        vector<int> ans;
        for(int i = 0;i<n;i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(prod1);
            }
            else
            {
                ans.push_back(prod/nums[i]);
            }
        }

        return ans;
    }
};
