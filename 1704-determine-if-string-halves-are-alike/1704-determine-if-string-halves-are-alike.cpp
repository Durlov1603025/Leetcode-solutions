string vowels = "aeiouAEIOU";

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid = n/2, c=0; 
        for (int i = 0, j = mid; i < mid; i++, j++) 
        {
            if (~vowels.find(s[i]))
                c++;
            if (~vowels.find(s[j]))
                c--;
        }
        
        if(c==0)
            return true;
        else
            return false;
    }
};