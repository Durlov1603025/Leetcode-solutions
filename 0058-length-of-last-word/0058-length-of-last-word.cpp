class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int len = s.size();
        for(int i=len-1; i>=0 ;i--)
        {
            if(s[i] != ' ') {
                count++;
            }
            if(count != 0 && s[i]==' ')
            {
                break;
            }
        }
        return count;
    }
};