void countBits(int n, int res[]) {
    for (int j = 0; j <= n; j++) {
        res[j] = res[j >> 1] + (j & 1);
        }
}

