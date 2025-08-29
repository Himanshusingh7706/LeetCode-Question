#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string result;
        int Balance = 0; // initialize counter

        for (char i : s)
        {
            if (i == '(')
            {
                if (Balance > 0)
                { // not outermost '('
                    result += i;
                }
                Balance++;
            }
            else
            { // i == ')'
                Balance--;
                if (Balance > 0)
                { // not outermost ')'
                    result += i;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    string s1 = "(()())(())";
    cout << "Input: " << s1 << "\n";
    cout << "Output: " << sol.removeOuterParentheses(s1) << "\n\n";
    // Expected: "()()()"

    string s2 = "(()(()))";
    cout << "Input: " << s2 << "\n";
    cout << "Output: " << sol.removeOuterParentheses(s2) << "\n\n";
    // Expected: "()(())"

    string s3 = "()()";
    cout << "Input: " << s3 << "\n";
    cout << "Output: " << sol.removeOuterParentheses(s3) << "\n\n";
    // Expected: ""

    return 0;
}
