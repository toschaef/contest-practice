class Solution {
private:
    int getPalindromicLength(string s, int r, int l) {
        while((l >= 0 && r < s.size()) && s[l] == s[r]) {
            --l;
            ++r;
        }
        return r - l - 1;
    }
public:
    string longestPalindrome(string s) {
        int _max{}, start{};

        for (int i = 0; i < s.size(); i++) {
            int len1 = getPalindromicLength(s, i, i);
            int len2 = getPalindromicLength(s, i, i + 1);
            
            int len = max(len1, len2);
            if (len > _max) {
                _max = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, _max);
    }
};