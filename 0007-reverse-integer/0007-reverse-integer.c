 int reverse(int x) {
    long reversed = 0; 
    
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    // Range check
    if (reversed > 2147483647 || reversed < -2147483648) {
        return 0;
    }
    
    return (int)reversed;
}