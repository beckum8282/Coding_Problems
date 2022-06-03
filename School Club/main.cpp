#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[8];

void recall(int currentSize){
    if(currentSize == M){
        for(int i = 0; i < M; ++i) cout << arr[i] << " ";
        cout << "\n";
        
        return;
    }

    for(int i = 1; i <= N; ++i){
        if(count(arr, arr + currentSize, i) != 0)
            continue;

        arr[currentSize] = i;
        recall(currentSize + 1);
        arr[currentSize] = 0;
    }
}

int main() {
    cin >> N >> M;

    recall(0);

    return 0;
}