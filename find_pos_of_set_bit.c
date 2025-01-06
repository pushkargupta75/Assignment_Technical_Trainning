int findPosition(int num){
    if (num <= 0 || (num & (num - 1)) != 0) return -1;
    int pos = 1;
    while ((num & 1) == 0){
        num >>= 1;
        pos++;
    }
    return pos;
}
