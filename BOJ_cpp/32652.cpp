#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    string str1 = "AKA";
    string str2 = "RAKA";
    for (int i = 0; i < k; i++)
    {
        str1.append(str2);
    }
    cout << str1 << '\n';
    return 0;
}