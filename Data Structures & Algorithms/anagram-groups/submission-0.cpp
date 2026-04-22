class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> res;

        for (const auto& s : strs) {
            std::vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            std::string key = to_string(count[0]);
            for (auto v : count) {
                key += ", " + to_string(v);
            }

            res[key].push_back(s);
        }

        std::vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }

        return result;
    }
};
