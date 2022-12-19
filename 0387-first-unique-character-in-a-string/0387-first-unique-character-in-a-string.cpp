class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        
        // Initialize the unordered_map
        unordered_map<char, int> count;
        
        // Calculating the frequency of characters
        for(int i=0; i<n; i++)
        {
            count[s[i]]++;
        }

        //get the first letter occurs once
        for(int i=0; i<n; i++)
        {
            if (count[s[i]] == 1)
            {
                return i;    // If the frequency of character is 1 then it is unique and hence return its index.
            }
        }
        return -1;  // If no unique character then return  -1
    }
};