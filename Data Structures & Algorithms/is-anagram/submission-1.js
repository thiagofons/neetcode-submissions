class Solution {
  /**
   * @param {string} s
   * @param {string} t
   * @return {boolean}
   */
  isAnagram(s, t) {
    const stringMap = {};

    // Check if they have the same size
    if (s.length !== t.length) return false;

    // Iterate over S
    for (let letter of s) {
      if (!stringMap[letter]) {
        stringMap[letter] = 1;
        continue;
      }
      stringMap[letter]++;
    }
    // Iterate over T
    for (let letter of t) {
      if (!stringMap[letter]) return false;
      stringMap[letter]--;
    }
    return true;
  }
}