class Solution:
  def search(self, nums: list[int], target: int) -> int:    
    size = len(nums)

    start = 0    
    end = size - 1
    middle = (start + end) // 2

    while start <= end:
      if nums[middle] == target:
        return middle
      
      if nums[middle] < target:
        start = middle + 1
      else:
        end = middle - 1

      middle = (start + end) // 2

    return -1