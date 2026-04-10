class Solution {
public:
    int reverse(int x) {
        int reverse =0;
        while(x !=  0){
            int digit = x%10;
            x = x/10;
             if(reversed > INT_MAX/10 || reversed < INT_MIN/10) return 0;
            reverse = reverse * 10 + digit;
        }
        return reverse;
    }
};