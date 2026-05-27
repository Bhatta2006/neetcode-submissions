class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;
        if(nums.size()==0) return 0;
        for (auto i : nums) mp[i]++;
        vector<int> a;
        for (auto i : mp) a.push_back(i.first);
        int ans = 0, count = 1;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == a[i - 1] + 1)
                count++;
            else {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans,count); // important
        return ans;
    }
};
