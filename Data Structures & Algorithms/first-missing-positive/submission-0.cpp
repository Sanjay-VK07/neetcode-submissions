class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i = 1; i <= nums.size() + 1; i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return i;
            }
        }

        return -1;
    }
};