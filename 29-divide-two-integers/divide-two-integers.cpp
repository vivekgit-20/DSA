class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long long and take abs
        long long dvd = labs((long long)dividend);
        long long dvs = labs((long long)divisor);

        long long ans = 0;

        while (dvd >= dvs) {

            long long temp = dvs;
            long long multiple = 1;

            // Keep doubling
            while ((temp << 1) <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            ans += multiple;
        }

        return negative ? -ans : ans;
    }
};