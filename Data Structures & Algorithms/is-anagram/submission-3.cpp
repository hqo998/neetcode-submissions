class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        unordered_map<char, int> freqS {};
        unordered_map<char, int> freqT {};

        for (int i {0}; i < s.length(); i++) {
            auto check = freqS.emplace(s[i], 1);
            if (!check.second) freqS.at(s[i]) += 1;

            check = freqT.emplace(t[i], 1);
            if (!check.second) freqT.at(t[i]) += 1;
        }
        return freqS == freqT;
    }
};
