class Solution {
public:
    bool isHappy(int n) {
        int ans = n;

        for(int i =0; i<10; i++)
        {
            n = ans;
            ans = sq(n);

        if(ans == 1){
            return true;
        }
        }
        return false;
    }

    int sq (int num)
    {
        int sum=0;
        while(num!=0)
        {
            int rem;
            rem = num%10;
            sum = sum + (rem*rem);
            num = num/10;
        }
        return sum;
    }
};