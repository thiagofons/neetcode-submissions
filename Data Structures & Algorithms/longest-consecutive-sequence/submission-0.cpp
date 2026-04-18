class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    int size = nums.size();

    unordered_set<int> set;

    // Iterate over the array, putting nums[i] in set
    for (int i = 0; i < size; i++) 
      set.insert(nums[i]);
    

    int longest = 0;
    for (int i = 0; i < size; i++) {
      int num = nums[i];

      if (set.count(num - 1) == 0) {
        // Num is a start of a sequence
        int length = 0;

        while (set.count(num + length) > 0) 
          length++;

        longest = max(length, longest);
      }
    }
    return longest;
  }
};