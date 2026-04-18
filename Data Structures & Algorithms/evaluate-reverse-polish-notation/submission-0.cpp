class Solution {
public:
  int evalRPN(vector<string>& tokens) {
    stack<string> st;

    for (string token : tokens) {
      int first, second, result;

      if (token == "+" || token == "-" || token == "*" || token == "/") {
        second = stoi(st.top());
        st.pop();
        first = stoi(st.top());
        st.pop();
      }

      if (token == "+") {
        result = first + second;
        st.push(to_string(result));
      } 
      else if (token == "-") {
        result = first - second;
        st.push(to_string(result));
      } 
      else if (token == "*") {
        result = first * second;
        st.push(to_string(result));
      }
      else if (token == "/") {
        result = first / second;
        st.push(to_string(result));
      }
        
      else 
        st.push(token);
    }

    return stoi(st.top());
  }
};
