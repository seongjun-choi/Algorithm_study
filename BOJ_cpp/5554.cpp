#include <iostream>

using namespace std;

int main(){
    int num, result = 0;
    for (int i=0; i<4; i++){
        cin >> num;
        result += num;
    }
    int min = result/60;
    int sec = result % 60;
    cout << min << endl;
    cout << sec << endl;
    return 0;
}
