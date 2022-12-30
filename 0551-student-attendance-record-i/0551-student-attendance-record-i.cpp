class Solution {
public:
    bool checkRecord(string s) {
        int ca=0, cl=0, cp=0, ans=2;
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'A')
            {
                ca++;
           }
        }
        for(int j=0; j<n; j++)
        {
            if(s[j]=='L')
            {
                cl++;
                if(cl>ans)
                {
                    ans=cl;
                }
            }
            else
            {
                cl=0;
            }
        }
        if(ca<2 && ans<3)
        {
            return true;
        }
        return false; 
    }
};