class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        int i;
        stack <char> st;
        for(i=0; i<n; i++)
        {
            if(st.empty())
            {
                if(s[i] == '('  || s[i] == '{' || s[i] == '[')
                {
                    st.push(s[i]);
                }
                else
                return false;
            }
            else if(s[i] == '('  || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.top() == '('  && s[i]==')')
                {
                    st.pop();
                }
                else if (st.top() == '{'  && s[i]=='}')
                {
                    st.pop();
                }
                else if (st.top() == '['  && s[i]==']')
                {
                    st.pop();
                }
                else
                return false;
            }
        }
        if(st.size()==0)
        {
            return true;
        }
        return false;
    }
};