#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<char> ops;
stack<int> st;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (cnt <= x)
        {
            st.push(cnt++);
            ops.push_back('+');
        }
        if (st.top() == x)
        {
            st.pop();
            ops.push_back('-');
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    for (char op : ops)
    {
        cout << op << "\n";
    }

    return 0;
}