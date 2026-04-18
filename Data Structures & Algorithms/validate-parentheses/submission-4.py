class Solution:

  # Correspondent closing ones map
  correspondent = {
    ")": "(",
    "}": "{",
    "]": "["
  }

  open_brackets = list(correspondent.values())
  closing_brackets = list(correspondent.keys())

  def isValid(self, s: str) -> bool:
    # Create a stack
    stack = []

    # Iterate over the string
    for c in s:
      # If it's an open bracket, add to stack
      if c in self.open_brackets:
        stack.append(c)

      else:
        if len(stack) == 0:
          return False
        
        top_of_stack = stack[-1]

        # If it's the correspondent, pop the stack
        if top_of_stack != self.correspondent[c]:
          return False
        
        stack.pop()

    if len(stack) > 0:
      return False

    return True