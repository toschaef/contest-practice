class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int remainder{};
        for (int i = 1; i <= k; i++) {
            remainder = (remainder * 10 + 1) % k;
            if (!remainder) return i;
        }

        return -1;
    }
};