
#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    set<string> opp({"+", "-", "*", "/"});
    stack<int> stack;
    for (auto i : tokens)
    {
        if (opp.find(i) == opp.end())
        {
            stack.push(stoi(i));
        }
        else
        {
            int b = stack.top();
            stack.pop();
             int a = stack.top();
            stack.pop();
            
             if (i == "+") stack.push(a + b);
            else if (i == "-") stack.push(a - b);
            else if (i == "*") stack.push(a * b);
            else
            {
                stack.push(a / b);
            }
        }
    }
    return stack.top();
}

int main()
{
    vector<string> tocken = {"2", "1", "+", "3", "*"};
    int n = evalRPN(tocken);
    cout << n << endl;
    return 0;
}