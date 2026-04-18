class Solution {
  /**
   * @param {number[]} nums
   * @return {boolean}
   */
  hasDuplicate(nums) {
    const hashmap = {};

    for (let item of nums) {
      if (hashmap[item]) {
        return true;
      }
      hashmap[item] = 1;
    }
    return false;
  }
}