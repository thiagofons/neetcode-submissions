class Solution:
  # O(n²) time, O(1) space
  '''
  def maxProfit(self, prices: List[int]) -> int:
    max = 0

    for buy in range(len(prices) - 1):
      for sell in range(buy + 1, len(prices)):
        diff = prices[sell] - prices[buy]
        if diff > max:
          max = diff

    return max
  '''

  
  def maxProfit(self, prices: List[int]) -> int:
    max = 0

    for buy in range(len(prices) - 1):
      for sell in range(buy + 1, len(prices)):
        diff = prices[sell] - prices[buy]
        if diff > max:
          max = diff

    return max