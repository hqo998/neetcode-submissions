class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        
        int largest = 0;

        while (left < right) {
            int tmp = calcArea(heights[left], heights[right], right - left);
            if (tmp > largest) largest = tmp;

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return largest;
    }

    int calcArea(int height1, int height2, int spaceApart) {
        return std::min(height1, height2) * spaceApart;
    }
};
