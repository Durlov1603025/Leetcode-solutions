class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i=0, j;
        int c=0;
        int n = jewels.size();
        int m = stones.size();
        while(i<n)
        {
            for(j=0; j<m; j++)
            {
                if(stones[j] == jewels[i])
                {
                    c++;
                }
            }
            i++;
        }
        return c;
    }
};