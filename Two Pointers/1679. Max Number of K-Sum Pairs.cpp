class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int start=0, end=nums.size()-1, count=0;
        
        for (int i=0;i<nums.size(); ++i) {
            if (nums[i]>=k) {
                end = i-1;
                break;
            }
        }
        
        while (start < end) {
            if (nums[start]+nums[end] < k)
                start++;
            else if (nums[start]+nums[end] > k)    
                end--;
            else {
                count++;
                start++;
                end--;
            }
        }
        return count;
    }
};
