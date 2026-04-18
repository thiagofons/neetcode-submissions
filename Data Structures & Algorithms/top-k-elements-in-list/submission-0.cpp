class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
    map<int, int> frequency;

    for (int element : nums) {
      frequency[element]++;
    }

    vector<pair<int, int>> arr;
    for (auto freq : frequency) {
      arr.push_back({freq.second, freq.first});
    }

    sort(arr.rbegin(), arr.rend());

    for (int i = 0; i < k; i++) {
      res.push_back(arr[i].second);
    }

    return res;
  } 
};