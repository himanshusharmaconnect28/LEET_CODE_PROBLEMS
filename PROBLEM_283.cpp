class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int j = 0; 
        for (int i = 0; i < size; i++) {
            if (nums[i] != 0) {
            nums[j++] = nums[i];
            }
        }
        for (int i = j; i < size; ++i) {
        nums[i] = 0;
        }
    }
};
