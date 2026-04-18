class MinStack {
private:
  vector<long int> items;

public:
    MinStack() {
      items = {};
    }
    
    void push(int val) {
      items.push_back(val);
    }
    
    void pop() {
      items.pop_back();
    }
    
    int top() {
      return items[items.size() - 1];
    }
    
    int getMin() {
      int min = items[0];

      for (int item: items) {
        if (item < min) min = item;
      }

      return min;
    }
};