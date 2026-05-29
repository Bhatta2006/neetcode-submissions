class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        int n = h.size();
        int l=0,r=n-1;
        while(l<r)
        {
            ans = max(ans,min(h[l],h[r])*(abs(l-r)));
            if(h[l]<h[r]) l++;
            else r--;
        }
        return ans;
    }
};
