int square(int i) {
    if (i<0)i= -i; 
    int result = 0, temp = i, shift = 0;
    while (temp > 0) {
        if (temp & 1) result += (i<< shift); 
        shift++;       
        temp >>= 1; 
    }
        return result;
    }

