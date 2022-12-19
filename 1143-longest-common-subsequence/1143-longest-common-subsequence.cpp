class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        string result;
        int i, j;
        int dp[n+1][m+1];
        
        for(i=0; i<=n; i++)
            dp[i][0] = 0;
        
        for(i=0; i<=m; i++)
            dp[0][i] = 0;
        
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        i = n, j=m;
        while(i>0 && j>0)  //if any of i or j becomes 0, any of the strigs becomes empty
        {
            if(text1[i-1] == text2[j-1])
            {
                result = result + text1[i-1];  //if matches then add to result and move diagally up
                i--;
                j--;
            }

            else
            {
                if(dp[i][j-1] > dp[i-1][j])
                {
                    j--;
                }
                else
                i--;
            }

        }
        reverse(result.begin(), result.end());
        cout<<result;
        return dp[n][m];
    }
};