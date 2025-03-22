#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
    }
    if (n % 2 == 1)
    {
        cnt[s[n / 2] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}