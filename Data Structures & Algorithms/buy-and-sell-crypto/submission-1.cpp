class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>p(n),s(n);
        p[0] = prices[0];
        s[n-1] = prices[n-1];
        for(int i=1;i<n;i++) p[i] = min(p[i-1],prices[i]);
        for(int i=n-2;i>=0;i--) s[i] = max(s[i+1],prices[i]);
        int ans=0;
        for(int i=0;i<n;i++) ans = max(ans,s[i]-p[i]);
        return ans;
    }
};
