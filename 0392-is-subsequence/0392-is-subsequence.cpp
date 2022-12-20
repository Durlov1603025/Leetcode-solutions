class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int i,j=0;
        int m = t.size();
        
        for(i=0; i < m; i++)
        {
            if(s[j] == t[i])
                j++;
        }
        
        if(j==n)
        {
            return true;
        }
        return false;
    }
};