class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int num = x;
        while(x>0){
            int lastdig = x%10;
             rev = rev * 10 + lastdig;
            x = x/10;
        }
        if(num == rev){
            return true;
        }else{
            return false;
        }

        
    }
};