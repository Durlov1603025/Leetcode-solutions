class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long ans=0;
        int sign =1;

        while (isspace(s[i]))
        {
            i++;
        }

        if(s[i] == '-')
        {
            sign*=-1;
            i++;
        }
        else if (s[i] == '+')
        {
            i++;
        }

        int j, n=s.size();
        for(j=i; j<n; j++)
        {
            if(s[j]>='0' && s[j]<='9' )
            {
                ans=((ans*10)+(s[j]-'0'));
                if(ans>= INT_MAX)
                break;
            }
            else break;
        }
        ans = ans* sign;
        if(ans>= INT_MAX)
        {
            return INT_MAX;
        }
        else if(ans<= INT_MIN)
        {
            return INT_MIN;
        }
        else return ans;
    }
};