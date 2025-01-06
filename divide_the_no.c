int divide(int dividend, int divisor) {
    if (divisor == 0) printf("Division by zero is not allowed.");
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    bool isNegative = (dividend < 0) ^ (divisor < 0);
    long long a = abs((long long)dividend), b = abs((long long)divisor), result = 0;
    while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;}
            a -= temp;
            result += multiple;
        }
    return isNegative ? -result : result;
    }
