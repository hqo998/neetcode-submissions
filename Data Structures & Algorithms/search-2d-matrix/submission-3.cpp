// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size() - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;
            
//             if (nums[mid] == target) return mid;

//             if (target > nums[mid]) left = mid + 1; 
//             if (target < nums[mid]) right = mid - 1; 
//         }

//         return -1;
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size() - 1;

        int i_n = matrix.at(0).size();

        int searchRow = 0;

        // find the correct row
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[mid][0] <= target && matrix[mid][i_n - 1] >= target)
            {
                searchRow = mid;
                break;
            }

            if (matrix[mid][0] <= target && matrix[mid][i_n - 1] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0;
        right = i_n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (matrix[searchRow][mid] == target) return true;

            if (target > matrix[searchRow][mid]) left = mid + 1; 
            if (target < matrix[searchRow][mid]) right = mid - 1; 
        }

        return false;

    }
};
