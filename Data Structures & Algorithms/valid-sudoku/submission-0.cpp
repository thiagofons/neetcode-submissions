class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    int rows = board.size(), cols = board[0].size();

    unordered_map<int, unordered_set<char>> column_map;
    unordered_map<int, unordered_set<char>> box_map;

    for (int i = 0; i < rows; i++) {
      unordered_set<char> row_set;

      for (int j = 0; j < cols; j++) {
        char element = board[i][j];

        if (element != '.') {
          // Chekc if it's in the row
          if (row_set.count(element) > 0) 
            return false;
          
          row_set.insert(element);
          
          // Check if it's in the column
          if(column_map[j].count(element) > 0) 
            return false;
          
          column_map[j].insert(element);

          // Check if it's in the box
            int box_index = (i / 3) * 3 + (j / 3);
            if (box_map[box_index].count(element) > 0)
            return false;

            box_map[box_index].insert(element);
        }
      }
    }
    return true;
  }
};