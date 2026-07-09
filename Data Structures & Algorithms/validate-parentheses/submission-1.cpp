class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;

        for (auto& i : s) {
            if (i == '(' || i == '[' || i == '{') {
                st.push(i);
            } else {
                char x;
                if (i == ')')
                    x = '(';
                else if (i == ']')
                    x = '[';
                else
                    x = '{';

                if (st.empty() || st.top() != x) return false;

                st.pop();
            }
        }

        return st.empty();
    }
};