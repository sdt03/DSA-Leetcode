class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        long long temp = x;
        while(temp>0){
            int lastD = temp%10;
            reverse = reverse * 10 + lastD;
            temp = temp/10;
        }
        if(x==reverse)
             return true;
        else
             return false;
    }
};