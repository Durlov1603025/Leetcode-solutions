class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j=n-1;
        while(i<j)
        {
            if(isVowel(s[i]) && isVowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(!isVowel(s[i])) 
            {i++;}
            else if(!isVowel(s[j]))
            {
                j--;
            }
        }
        return s;
    }
    
    bool isVowel(char c){
        
        if(c=='a' || c== 'e' || c=='i' || c=='o' || c=='u'|| c=='A' || c== 'E' || c=='I' || c=='O' || c=='U')
            return true;
    return false;
    }
};