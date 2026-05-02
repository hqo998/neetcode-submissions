

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> result(temperatures.size(), 0);
        std::stack<std::pair<int, int>> stk;

        for (int i{0}; i < temperatures.size(); i++) {
            int t = temperatures[i];
            while (!stk.empty() && t > stk.top().first) {
                auto pair = stk.top();
                stk.pop();
                result[pair.second] = i - pair.second;

            }

            stk.push({t, i });
        }

        return result;
    }
};
