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

  # O(n) time, O(1) space
  def maxProfit(self, prices: List[int]) -> int:
    max_profit = 0
    lowest_price = 0

    for i in range(len(prices)):
      if prices[i] - prices[lowest_price] > max_profit:
        max_profit = prices[i] - prices[lowest_price]

      if prices[i] < prices[lowest_price]:
        lowest_price = i
    
    return max_profit