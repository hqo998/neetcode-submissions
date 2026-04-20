class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        unordered_map<char, int> freqS;
        unordered_map<char, int> freqT;

        for (int i {0}; i < s.length(); i++) {
            freqS[s[i]] += 1;
            freqT[t[i]] += 1;
        }
        return freqS == freqT;
    }
};
