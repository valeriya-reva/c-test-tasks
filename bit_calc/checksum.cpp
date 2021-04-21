int count_bit(char b) {
    int count = 0;
    for (int i = 7; i >= 0; --i) {
        if((b >> i) & 1) {
            count += 1;
        }
    };

    return count;
}
