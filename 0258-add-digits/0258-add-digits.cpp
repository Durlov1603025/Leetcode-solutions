class Solution {
public:
    int addDigits(int num) {
        int ans, i;
        for(i=0; i<10; i++)
        {
            ans = add(num);
            num = ans;
        }
        return ans;
    }
    
    int add(int n)
    {
        int sum=0;
        int rem;
        while(n!=0)
        {
            rem = n%10;
            sum+= rem;
            n = n/10;
        }
        return sum;
    }
};