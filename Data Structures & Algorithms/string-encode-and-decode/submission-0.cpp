class Solution {
public:

    string encode(vector<string>& strs) {
        string en="";
        for(auto i:strs)
        {
            en+=i;
            en+="-";
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string t="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='-')
            {
                t.push_back(s[i]);
            }
            if(s[i]=='-')
            {
                ans.push_back(t);
                t.clear();
            }
        }
        return ans;
    }
};
