class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqS {};
        unordered_map<char, int> freqT {};

        for (auto& c : s) {
            auto check = freqS.emplace(c, 1);
            if (!check.second) freqS.at(c) += 1;
        }

        for (auto& c : t) {
            auto check = freqT.emplace(c, 1);
            if (!check.second) freqT.at(c) += 1;
        }

        return freqS == freqT;
    }
};
