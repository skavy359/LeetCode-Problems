class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= max1) {
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] <= max1 && nums[i] >= max2) {
                max2 = nums[i];
            }
        }
        int answer = (max1 - 1) * (max2 - 1);
        return answer;
    }
};
