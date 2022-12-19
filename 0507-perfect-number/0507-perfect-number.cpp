class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long int i,rem, sum=1, div;
        if(num == 1)
            return false;
        
        
        for(i=2; i< sqrt(num); ++i)
        {
            rem = num%i;
            div = num/i;
            if (rem==0)
            {
                sum = sum + i + div;
            }
        }
        
        if(sum != num)
        {
            return false;
        }
        
        return true;
    }
};