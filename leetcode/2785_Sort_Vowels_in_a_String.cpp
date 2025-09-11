class Solution {
public:
    string sortVowels(string s) {
        string vow = "AEIOUaeiou";
        unordered_map<char, int> m;
        vector<int> ind;
        for (size_t i = 0; i < s.size(); i++) {
            if (vow.find(s[i]) != string::npos) {
                m[s[i]]++;
                ind.push_back(i);
            }
        }
        int v = 0;
        for (size_t i = 0 ; i < ind.size(); i++) {
            while (!m[vow[v]]) v++;
            s[ind[i]] = vow[v];
            m[vow[v]]--;
        }
        return s;
    }
};
