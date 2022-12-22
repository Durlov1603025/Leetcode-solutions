class Solution {
    
    bool check(string s)
    {
        for(auto i : s)
        {
            if(i>= '0' && i<='9')// if string contain digit (false)
                return false;
        }
        
        int hyphen = 0;
        for(auto i : s)// counting no of  hyphens in string
            if(i == '-')
                ++hyphen;
        
        if(hyphen >= 2)// if hyphen is greater than 1 return false; unvalid
            return false;
    
        for(int i = 0; i<s.length(); ++i)
        {
            if(s[i] == '-')
            {
                if(i == 0)
                    return false;
                if(i == s.length()-1)
                    return false;
                if(s[i-1]<'a' || s[i-1] >'z' || s[i+1] <'a' || s[i+1] > 'z') // checking hyhen should be between lower case alphabets also checking string contain only lowercase alphabet
                    return false;     
            }
        }
        
        int pun = 0;
        
        for(auto i : s)// counting punctuations
        {
            if(i == '!' || i == ',' || i == '.')
                ++pun;
        }
        
        if(pun >= 2)// if punctuation > 1 return false
            return false;
        
        if(pun == 1 && (s[s.length() -1] != '!' &&s[s.length() -1] != ',' && s[s.length() -1] != '.'))
            return false;// if punctuation is not at the end of string return false
        
    return true;// if all passes return true
    }
    
public:
    int countValidWords(string sentence) {
       string word = "";
        int cnt = 0;
        
        sentence.push_back(' ');// adding one space at the end  of string for easyness.
        
        int n = sentence.size();
        
        for(int i = 0; i<n; ++i)
        {
            if(sentence[i] == ' ')// if space occur means word ends
            {
                if(word != "")
                {
                    if(check(word))// if valid word increase count
                        ++cnt;
                }
                word = ""; // initialising word to empty for storing next word
            }
            
            else
            {
                word += (char)sentence[i];// if not space add char to word
            }
        }
        return cnt;// return no of valid words
    }
};