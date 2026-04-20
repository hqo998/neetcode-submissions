class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashmap {};
        for (int& num : nums) {
            auto check = hashmap.emplace(num);
            if (!check.second) return true;
        }

        return false;

    }
};