class Solution {
public:
  bool isAnagram(string s, string t) { 
    unordered_map<char, int> map;

    if (s.size() != t.size()) return false;

    for (char c : s) {
      if (map.count(c) >= 1) {
        map[c]++;
        continue;
      }

      map[c] = 1;
    }

    for (char c : t) {
      if (map[c] > 0) {
        map[c]--;
        continue;
      }
      return false;
    }
    return true;
  }
};