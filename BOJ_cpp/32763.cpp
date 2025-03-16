#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> multiSign(n + 1);
    vector<char> resultSign(n + 1);

    int flag1, flag2 = -1;

    for (int i = 2; i < n + 1; i++)
    {
        cout << "? 1 * " << i << endl;
        char ans;
        cin >> ans;
        multiSign[i] = ans;
        if (ans == '+')
        {
            flag1 = 1;
            flag2 = i;
        }
    }
    if (flag2 == -1)
    {
        flag1 = 2;
        flag2 = 3;
    }
    cout << "? " << flag1 << " + " << flag2 << endl;
    char ans;
    cin >> ans;

    if (ans == '+')
    {
        resultSign[flag1] = '+';
        resultSign[flag2] = '+';
    }
    else
    {
        resultSign[flag1] = '-';
        resultSign[flag2] = '-';
    }

    if (flag1 == 1)
    {
        for (int i = 2; i < n + 1; i++)
        {
            if (multiSign[i] == '+')
            {
                resultSign[i] = resultSign[flag1];
            }
            else
            {
                if (resultSign[1] == '+')
                {
                    resultSign[i] = '-';
                }
                else
                {
                    resultSign[i] = '+';
                }
            }
        }
    }
    else
    {
        if (resultSign[flag1] == '+')
        {
            resultSign[1] = '-';
        }
        else
        {
            resultSign[1] = '+';
        }
        for (int i = 2; i < n + 1; i++)
        {
            resultSign[i] = resultSign[flag1];
        }
    }
    cout << "! ";
    for (int i = 1; i < n + 1; i++)
    {
        cout << resultSign[i] << " ";
    }
    cout << endl;
    return 0;
}