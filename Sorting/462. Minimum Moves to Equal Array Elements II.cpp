/* FIRST APPROACH
=> After looking at the problem statement, a basic idea which comes into our mind is we have to sort the array to find the mean/median element from the array,
   then get the absolute difference between mean/median value to all the array elements and sum those up. Remember we need to find the minimum possible answer
   ans to do that we're kind of making all the array elements equal to its mean/median. Here's the code below for the said approach.
   
   TIME COMPLEXITY -> O(nLogn) for sorting + O(n) for traversing the whole array -> O(nLogn)
   SPACE COMPLEXITY -> O(1)                                                                                                                                  */


   //CODE
   class Solution {
   public:
        int minMoves2(vector<int>& nums) {
          int n = nums.size();
          if (n==1) return 0;
          else {
              int ans=0;
              sort(nums.begin(), nums.end());
              int mid = nums[n/2];
    
              for (auto val: nums) ans += abs(val-mid);
              return ans;
          }
        }
    };


   
/* SECOND APPROACH
=> So, the trick to use in this approach is to use this function named nth_element (RandomAccessIterator first, RandomAccessIterator nth, RandomAccessIterator last);
   nth_element() is an STL algorithm which rearranges the list in such a way such that the element at the nth position is the one which should be at that position
   if we sort the list. And we can simply get the mean/median element of the sorted array without actually sorting it. Hence reducing the the time complexity to
   O(n). Here's the code below for the said approach.
   
   TIME COMPLEXITY -> O(n) for finding the mean using the nth_element() + O(n) for traversing the whole array -> O(n)
   SPACE COMPLEXITY -> O(1)                                                                                                                                  */


   //CODE
   class Solution {
   public:
        int minMoves2(vector<int>& nums) {
          int n = nums.size();
          if (n==1) return 0;
          else {
              int ans=0;
              nth_element(nums.begin(), nums.begin()+(n/2), nums.end());
              int mid = nums[n/2];
    
              for (auto val: nums) ans += abs(val-mid);
              return ans;
          }
        }
   };
