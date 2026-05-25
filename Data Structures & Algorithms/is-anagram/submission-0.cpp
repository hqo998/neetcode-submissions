class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqS {};
        unordered_map<char, int> freqT {};

        for (auto& c : s) {
            auto check = freqS.emplace(c, 0);
            if (!check.second) freqS.find(c)++;
        }

        for (auto& c : t) {
            auto check = freqT.emplace(c, 0);
            if (!check.second) freqT.find(c)++;
        }

        return freqS == freqT;
    }
};
