#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a;
    long long result=1;
    for (int i =0; i<n; i++){
        cin >> a;
        result = result * (a % m) % m;
    }
    cout << result << endl;
    return 0;
}