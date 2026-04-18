class Solution {
public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    // Find the target array
    int top = 0, bottom = rows - 1, middle = (top + bottom) / 2;;
    
    while (top <= bottom) {
      if (target < matrix[middle][0])
        bottom = middle - 1;
      else if (target > matrix[middle][0])
        top = middle + 1;
      else 
        break;

      middle = (top + bottom) / 2;
    }

    // Find the target inside its array
    int left = 0, right = columns - 1;

    while (left <= right) {
      int mid = (left + right) / 2;

      if (matrix[middle][mid] == target)
        return true;
      
      if (matrix[middle][mid] < target)
        left = mid + 1;
      else
        right = mid - 1;
    }

    return false;
  }
};