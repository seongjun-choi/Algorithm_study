#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;

    int K;
    cin >> K;

    for(int i = 0; i < K; i++){
        int x;
        cin >> x;
        if(x == 0){
            st.pop();
        }
        else{
            st.push(x);
        }
    }

    int result = 0;
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    cout << result << "\n";
    
    return 0;
}