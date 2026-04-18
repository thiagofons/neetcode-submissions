class Solution:


  def isPalindrome(self, s: str) -> bool:
    i = 0
    j = 0    

    # Remove all the spaces
    for _ in s:
      if s[i].isalnum():
        aux = list(s)
        aux[j] = aux[i].lower()
        s = "".join(aux)

        j += 1
      
      print(s)
      i += 1

    s = s[:j]

    # Check if is palindrome
    i = 0
    j = len(s) - 1

    while i < j:
      if s[i] != s[j]:
        return False
      
      i += 1
      j -= 1

    return True
  