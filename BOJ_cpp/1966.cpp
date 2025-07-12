#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int count;
    cin >> count;

    while (count--)
    {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int>> que;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int weight;
            cin >> weight;
            que.push({weight, i});
            pq.push(weight);
        }
        int order = 1;
        while (1)
        {
            int weight = que.front().first;
            int i = que.front().second;
            if (weight != pq.top())
            {
                que.pop();
                que.push({weight, i});
            }
            else
            {
                if (i == m)
                {
                    break;
                }
                else
                {
                    que.pop();
                    pq.pop();
                    order++;
                }
            }
        }
        cout << order << "\n";
    }
    return 0;
}