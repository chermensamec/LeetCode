/***
https://leetcode.com/problems/valid-parentheses/description/
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
***/

#include <iostream>
#include <stack>

bool isValid(std::string s) {
	std::stack<char> stack;
	
	for(auto i : s) {
 		if (i == '(' || i == '[' || i == '{') {
			stack.push(i);
		}
		else {
			if (stack.empty()) {
				return false;
			}
			if (i == ')' && stack.top() == '(') {
				stack.pop();
			}
			else if (i == '}' && stack.top() == '{') {
				stack.pop();
			}
			else if (i == ']' && stack.top() == '[') {
				stack.pop();
			}
			else {
				return false;
			}
		}
	}
	if (!stack.empty()) {
		return false;
	}
	return true;
}

int main() {
	std::string s;
	
	std::cin >> s;
	
	std::cout << isValid(s) << std::endl;
}
