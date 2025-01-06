int** powerSet(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int totalSubsets = 1 << numsSize; // Total subsets = 2^n
    int** result = (int**)malloc(totalSubsets * sizeof(int*));
    *returnColumnSizes = (int*)malloc(totalSubsets * sizeof(int));
    *returnSize = totalSubsets;

    for (int i = 0; i < totalSubsets; i++) {
        int* subset = (int*)malloc(numsSize * sizeof(int));
        int subsetSize = 0;

        for (int j = 0; j < numsSize; j++) {
            if (i & (1 << j)) { // Check if j-th bit in i is set
                subset[subsetSize++] = nums[j];
            }
        }

        result[i] = (int*)realloc(subset, subsetSize * sizeof(int));
        (*returnColumnSizes)[i] = subsetSize;
    }

    return result;
}
