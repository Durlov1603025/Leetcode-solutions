class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i >= n) break;
            int j = i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            string word = s.substr(i, j-i);
            if(ans.size()==0)
            {
                ans = word;
            }
            else
            {
                ans = word + " " + ans;
            }
            i = j+1;
        }
        return ans;
    }
};
