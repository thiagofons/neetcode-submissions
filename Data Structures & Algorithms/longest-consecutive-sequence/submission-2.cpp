class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    int size = nums.size();

    if (size <= 1)
      return size;

    sort(nums.begin(), nums.end());

    int greater = 1, actual = 1;

    for (int i = 1; i < nums.size(); i++) {
      int previous = nums[i - 1], current = nums[i];

      if (current == previous)
        continue;
      if (current == previous + 1)
        actual++;
      else
        actual = 1;

      greater = max(greater, actual);
    }

    return greater;
  }
};