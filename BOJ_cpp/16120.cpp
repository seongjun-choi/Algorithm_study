#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;

    int cnt = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'P') {
            cnt++;
        } 
        else if (str[i] == 'A') {
            if (cnt >= 2 && i + 1 < str.size() && str[i + 1] == 'P') {
                cnt--;
                i++;      
            } 
            else {
                cout << "NP\n";
                return 0;
            }
        }
    }
    if (cnt == 1) cout << "PPAP\n";
    else cout << "NP\n";

    return 0;
}