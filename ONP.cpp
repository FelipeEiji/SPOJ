#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <char> pilha;
    string expression;
    int T;

    cin >> T;

    while(T--)
    {
        cin >> expression;
        for(int i = 0; i<expression.size();i++)
        {
            if(expression[i] >= 40 && expression[i] <= 94)
            {
                if(expression[i] == '(')
                    pilha.push('(');
                else if(expression[i] == ')')
                {
                    while(pilha.top() != '(')
                    {
                        cout << pilha.top();
                        pilha.pop();
                    }
                    pilha.pop();
                }
                else
                    pilha.push(expression[i]);

            }
            else
                cout << expression[i];
        }
        cout << endl;
    }

    return 0;
}
