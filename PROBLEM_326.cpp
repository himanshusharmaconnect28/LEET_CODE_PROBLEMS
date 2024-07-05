class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == INT_MAX || n == INT_MIN || n <= 0) {
            return false;
        }
        
        for (int i = 0; i <= 30; i++) {
            if (pow(3, i) == n) {
                return true;
            }
        }
        return false;
    }
};
