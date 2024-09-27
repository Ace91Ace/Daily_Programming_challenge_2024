#include <iostream>  
#include <sstream>  
#include <stack>  
#include <string>  
#include <vector>  

class Solution {  
public:  
    int evalRPN(std::vector<std::string>& tokens) {  
        std::stack<int> stack;  

        for (const std::string& token : tokens) {  
            if (isOperator(token)) {  
                int b = stack.top(); stack.pop();  
                int a = stack.top(); stack.pop();  
                stack.push(evaluate(a, b, token));  
            } else {  
                stack.push(std::stoi(token));  
            }  
        }  

        return stack.top();  
    }  

private:  
    bool isOperator(const std::string& token) {  
        return token == "+" || token == "-" || token == "*" || token == "/";  
    }  

    int evaluate(int a, int b, const std::string& op) {  
        if (op == "+") return a + b;  
        if (op == "-") return a - b;  
        if (op == "*") return a * b;  
        if (op == "/") {  
            // Perform integer division truncating towards zero  
            return a / b; // Note: Integer division in C++ already truncates towards zero for positive dividends.  
        }  
        return 0; // Should never reach here  
    }  
};
