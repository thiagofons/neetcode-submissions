class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
      int value = nums[i];
      int diff = target - value;

      if (map.count(diff) > 0) {
        if (i < map[diff])
          return {i, map[diff]};
          
        return {map[diff], i};
      }

      map[value] = i;
    }

    return {};
  }
};