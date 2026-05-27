class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        vector<pair<int,int>>t;
        for(auto i:mp)
        {
            t.push_back({i.second,i.first});
        } 
        sort(t.begin(),t.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(auto i:t)
        {
            if(k)
            {
                ans.push_back(i.second);
                k--;
            }
        }
        return ans;
    }
};
