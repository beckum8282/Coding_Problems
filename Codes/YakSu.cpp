#include <iostream>
using namespace std;
int main(){
    int i = 0,n=0, max = 0, min = 0;
    cin >> i; // i는 약수 갯수
    int arr[i];
    for(int j=0;j<i;j++)
    {
        cin >> arr[j];
        if(max < arr[j])
        {
            max = arr[j];
        }
    }
    for(int j=0;j<i;j++)
    {
        if(j==0)
        {
            min = arr[j];
        }
        if(min > arr[j])
        {
            min = arr[j];
        }
    }
    cout << max*min;
}
// https://www.acmicpc.net/problem/1037 약수 문제