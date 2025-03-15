#include <iostream>
#include <vector>
using namespace std;

struct Target
{
    int x, y;
};

int getDistanceSquared(int x1, int y1, int x2, int y2)
{
    int dx = x1 - x2;
    int dy = y1 - y2;
    return dx * dx + dy * dy;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<Target> targets(n);
    for (int i = 0; i < n; i++)
    {
        cin >> targets[i].x >> targets[i].y;
    }

    vector<Target> newTargets(m);
    for (int i = 0; i < m; i++)
    {
        cin >> newTargets[i].x >> newTargets[i].y;
    }

    int cursorX = 0, cursorY = 0;
    int totalScore = 0;

    for (int i = 0; i < m; i++)
    {
        int maxDistance = -1;
        int maxIndex = -1;
        for (int j = 0; j < targets.size(); j++)
        {
            int distance = getDistanceSquared(cursorX, cursorY, targets[j].x, targets[j].y);
            if (distance > maxDistance)
            {
                maxDistance = distance;
                maxIndex = j;
            }
        }
        totalScore += maxDistance;
        cursorX = targets[maxIndex].x;
        cursorY = targets[maxIndex].y;

        targets[maxIndex] = newTargets[i];
    }
    cout << totalScore << endl;
    return 0;
}