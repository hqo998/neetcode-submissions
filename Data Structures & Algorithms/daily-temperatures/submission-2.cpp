

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> result(temperatures.size(), 0);
        std::stack<std::pair<int, int>> stk;

        for (int i{0}; i < temperatures.size(); i++) {
            while (!stk.empty() && temperatures[i] > stk.top().first) {
                auto pair = stk.top();
                stk.pop();
                result[pair.second] = i - pair.second;

            }

            stk.push({temperatures[i], i });
        }

        return result;
    }
};
