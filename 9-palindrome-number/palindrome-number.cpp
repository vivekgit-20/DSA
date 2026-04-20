class Solution {
public:
    bool isPalindrome(int x) {
        // Negative or ending with 0
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;

        while (x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        // For even digits, x == reversed
        // For odd digits, middle digit ignored → reversed/10
        return (x == reversed || x == reversed / 10);
    }
};