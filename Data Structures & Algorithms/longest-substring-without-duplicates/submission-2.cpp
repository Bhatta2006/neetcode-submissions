class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int ans=0 , n = s.length();
        if(n==0) return 0;
        else if(n==1) return 1;
        map<char,int>mp;
        while(r<n)
        {
            mp[s[r]]++;
            if(mp[s[r]]>1)
            {
                ans = max(ans,r-l);
                while(mp[s[r]]!=1)
                {
                    mp[s[l]]--;
                    l++;
                }
                r++;
            }
            else r++;
        }
        ans = max(ans,r-l);
        return ans;
    }
};
