class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = ceil(nums.size()/2);
        int p = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                if(i-p+1>x) return nums[i];
                else p = i+1;
            }
        }
        return nums[nums.size()-1];
    }
};