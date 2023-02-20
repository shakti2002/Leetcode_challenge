class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int m = low + (high-low)/2;
            if(nums[m] > target){
                high = m-1;
            }
            else if(nums[m] < target){
                low = m + 1;
            }
            else{
                return m;
            }
        }
        return low;
    }
};
