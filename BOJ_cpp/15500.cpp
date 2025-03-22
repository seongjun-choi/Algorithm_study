#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    stack<int> first;
    stack<int> second;
    queue<string> result;
    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        first.push(k);
    }
    bool flag = true;
    int cnt = N;
    // flag = true : 1 -> 2
    // flag = false : 2 -> 1
    while (cnt != 0)
    {
        if (flag)
        {
            while (!first.empty())
            {
                if (first.top() == cnt)
                {
                    result.push("1 3");
                    first.pop();
                    cnt--;
                }
                else
                {
                    result.push("1 2");
                    second.push(first.top());
                    first.pop();
                }
            }
            flag = false;
        }
        else
        {
            while (!second.empty())
            {
                if (second.top() == cnt)
                {
                    result.push("2 3");
                    second.pop();
                    cnt--;
                }
                else
                {
                    result.push("2 1");
                    first.push(second.top());
                    second.pop();
                }
            }
            flag = true;
        }
    }
    cout << result.size() << '\n';
    while (!result.empty())
    {
        cout << result.front() << '\n';
        result.pop();
    }
    
    return 0;
}