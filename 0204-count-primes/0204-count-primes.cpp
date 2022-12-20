class Solution {
public:
    int countPrimes(int n) {
        if(n<2)
        return 0;
        vector<bool> check(n);
        for(int i=2; i<sqrt(n); i++ )
        {
            if(check[i]==false)
            {
                for(int j=i*i; j<n; j=j+i)
                {
                    check[j] = true;
                }
            }
        }

        int count =0;
        for(int i=2; i<n; i++)
        {
            if(check[i]==false)
            {
                count++;
            }
        }

        return count;
    }
};