class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Count frequencies
        unordered_map<int, int> freqBucket;
        for (auto n : nums) {
            freqBucket[n] += 1;
        }

        // Add numbers to a list and sort by high to low appearances
        vector<pair<int,int>> arr;
        for (const auto& p : freqBucket) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        // Add top 'k' amount to list for response.
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(arr[i].second);
        }

        return res;
    }
};
