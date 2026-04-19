class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int ans = 0;
        unordered_map<char,int> mpp;
        while(l<n && r<n)
        {
            mpp[s[r]]++;
            if(mpp[s[r]]==1)
            {
                r++;
                ans = max(ans,r-l);
            }
            else if(mpp[s[r]]>1)
            {
                while(l<=r && mpp[s[r]]>1)
                {
                    mpp[s[l]]--;
                    l++;
                }
                r++;
            }
        }
        return ans;
    }
};
