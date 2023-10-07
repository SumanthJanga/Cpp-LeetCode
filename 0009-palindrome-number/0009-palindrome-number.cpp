class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        
        long res = 0, num = x;
        
        while(num > 0){
            int rem = num % 10;
            res = res * 10 + rem;
            num /= 10;
        }

        return x == res ? true : false;
    }
};