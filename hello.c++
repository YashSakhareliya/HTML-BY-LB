#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool isValidBrackets(const string& s) {
    stack<char> stack;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                stack.pop();
            } else {
                return false;
            }
        }
    }

    return stack.empty();
}

int main() {
    int n;
    cin >> n;
    
    vector<string> braces(n);
    for (int i = 0; i < n; ++i) {
        cin >> braces[i];
    }

    for (int i = 0; i < n; ++i) {
        if (isValidBrackets(braces[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
