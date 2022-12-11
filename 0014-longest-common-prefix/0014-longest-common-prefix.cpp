class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if (len == 0)
            return "";
        
        sort(begin(strs), end(strs));
        
        string str1 = strs[0];
        string str2 = strs[len-1];
        
        int n = str1.size();
        
        string ans = "";
        
        for(int i=0; i<n; i++)
        {
            if(str1[i]==str2[i]){
                ans = ans+str1[i];
            }
            else break;
        }
        return ans;
    }
};