class Solution {
public:
    bool detectCapitalUse(string word) {
        int i,j,c3=0, c1=0, c2=0;
        int n = word.size();

        if(word[0] >=65 && word[0] <=90)
        {
            c3++;
        }

        for(i=0; i<n; i++)
        {
            if(word[i] >=65 && word[i] <=90)
            {
                c1++;
            }
        }

        for(j=0; j<n; j++)
        {
            if(word[j] >=97 && word[j] <=122)
            {
                c2++;
            }
        }

        if(c1==n)
        {
            return true;
        }
        else if(c2==n)
        {
            return true;
        }

        else if(c1==1 && c3==1)
        {
            return true;
        }
        else
        return false;
    }
};