class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string x = s[0];
        string ans="";
        for(int i=0;i<x.length();i++)
        {
            bool a = true;
            for(int j=1;j<s.size();j++)
            {
                if(x[i]!=s[j][i])
                {
                    a = false;
                    break;
                }
            }
            if(!a) return ans;
            else ans.push_back(x[i]);
        }
        return ans;
    }
};