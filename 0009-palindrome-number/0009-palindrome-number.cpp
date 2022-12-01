class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long num2=0, temp, rem;
        temp =x;
        while(x!=0)
        {
            rem = x%10;
            num2 = (num2*10)+rem;
            x = x/10;
        }
        if(temp == num2){return true;}
        else
        {
            return false;
        }
    }
};