class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mpp;
        int l = 0;
        int r = 0;
        int n = s.size();
        int maxi = 0;
        int res = 0;
        while(r<n)
        {
            mpp[s[r]]++;
            maxi = max(maxi,mpp[s[r]]);
            while((r-l+1) - maxi > k)
            {
                mpp[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};
