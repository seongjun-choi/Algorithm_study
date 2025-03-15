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
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 == 1)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}