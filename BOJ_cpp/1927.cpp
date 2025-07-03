#include <iostream>
#include <queue>
using namespace std;

int N;

priority_queue<int, vector<int>, greater<int>> p_queue;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i<N; i++){
        int x;
        cin >> x;

        if(x == 0){
            if(p_queue.empty()){
                cout<< "0\n";
            }
            else{
                cout << p_queue.top() << "\n";
                p_queue.pop();
            }
        }
        else{
            p_queue.push(x);
        } 
    }

    return 0;
}

// 최소힙 직접 구현
// #define N 100000

// int arr[N];
// int counter = 0;

// void swap(int a, int b){
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// void dataDelete(){
//     if(counter == 0){
//         cout << 0 << '\n';
//         return;
//     }
//     cout << arr[1] << '\n';
//     arr[1] = arr[counter];
//     counter -= 1;
//     int current = 1;
//     while(true){
//         int left = current*2;
//         int right = current*2 + 1;
//         int smallest = current;

//         if(left <= counter && arr[left] < arr[smallest]){
//             smallest = left;
//         }
//         if(right <= counter && arr[right] < arr[smallest]){
//             smallest = right;
//         }
//         if(smallest == current)
//             break;
        
//         swap(current, smallest);
//         current = smallest;
//     }
// }

// void dataInsert(int newValue){
//     counter += 1;
//     arr[counter] = newValue;
//     int current = counter;
//     while(current > 1){
//         if(arr[current] < arr[current/2] ){
//             swap( current, current/2 );
//             current = current / 2;
//         }
//         else
//             break;
//     }
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     int n, m;
//     cin >> n;
//     for (int i=0; i<n; i++){
//         cin >> m;
//         if(m == 0){
//             dataDelete();
//         }
//         else{
//             dataInsert(m);
//         }
//     }
//     return 0;
// }
