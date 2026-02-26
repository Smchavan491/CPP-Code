#include <iostream>
#include <stack>

using namespace std;

// Function to define precedence of operators
int precedence(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

// Function for infix to postfix conversion
string ipo(string s) {
    stack<char> st;
    string res;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        // If operand, add to result
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            res += c;
        }
        // If '(', push to stack
        else if (c == '(') {
            st.push(c);
        }
        // If ')', pop until '(' is found
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // Remove '('
            }
        }
        // Operator encountered
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining elements in stack
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    string s = "a*(b+c/d)";
    cout << "Postfix expression: " << ipo(s) << endl;
    return 0;
}
