class Solution {
    public int countDigits(int n) {
        if (n == 0) return 1;
        
        // 1. Convert to positive using Math.abs()
        // 2. Then calculate log10
        int count = (int) Math.log10(Math.abs((double)n)) + 1;
        
        return count;
    }
}