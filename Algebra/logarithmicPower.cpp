long long binpow(long long x, long long n) {
// compute x^n in logarithmic time complexity O(log n)
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * x;
        x = x * x;
        n >>= 1;
    }
    return res;
}
