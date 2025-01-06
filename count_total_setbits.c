int countTotalSetBits(int n) {
    int result = 0;
    for (int i = 0; i < 32; i++) { 
        int Mask = 1 << i;
        result += ((n + 1) / (2 * Mask)) * Mask +max(0, (n + 1) % (2 * Mask) - Mask);
        }
        return result;
    }

