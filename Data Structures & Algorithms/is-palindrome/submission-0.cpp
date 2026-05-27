class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto i:s)
        {
            if((i>='a'&& i<='z')|| (i>='0' && i<='9')) t.push_back(i);
            else if((i>='A' && i<='Z')) t.push_back(i-'A'+'a');
             
        }
        
        string k = t;
        cout<<k;
        reverse(k.begin(),k.end());
        return k==t;
    }
};
