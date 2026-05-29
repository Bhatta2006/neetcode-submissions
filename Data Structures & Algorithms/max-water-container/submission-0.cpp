class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        int n = h.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans = max(ans,min(h[i],h[j])*(abs(i-j)));
            }
        }
        return ans;
    }
};
