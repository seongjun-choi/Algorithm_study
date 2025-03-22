#include <iostream>
#include <string>
using namespace std;

int arr[10], days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] && (to_string(x).find(i + '0') != string::npos))
        {
            return false;
        }
        // '0'의 ASCII 값은 48
        // i가 0~9일 때 i + '0'은 결국 48 + i, 즉 ‘0’ ~ ‘9’에 해당하는 문자
        // 즉, i + '0'은 정수 i를 문자로 바꾼 것
        // 그래서 to_string(x).find(i + '0')는 x를 문자열로 바꾼 뒤, 거기서 숫자 i가 등장하는지 확인하는 코드
        // find(str) != string::npos 찾고자 하는 문자열이 존재할 때 true
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= 12; i++)
        {
            for (int j = 1; j <= days[i-1]; j++)
            {
                if (check(i) && check(j))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}