#include <iostream>
using namespace std;
int main(){
    int i = 0,n=0, max = 0, min = 0;
    cin >> i; // i는 약수 갯수
    for(int j=0;j<i;j++)
    {
        cin >> n;
        if(max < n)
        {
            max = n;
        }
    }
    


}
// https://www.acmicpc.net/problem/1037 약수 문제