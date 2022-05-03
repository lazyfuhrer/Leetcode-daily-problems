class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int max = nums[0], min = nums[nums.size()-1];
        int low = 0, high = -1;
        
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i]>=max)
                max = nums[i];
            else high = i;
        }
        for (int i=nums.size()-2; i>=0; --i) {
            if (nums[i]<=min)
                min = nums[i];
            else low = i;
        }
        return high-low+1;
    }
};
