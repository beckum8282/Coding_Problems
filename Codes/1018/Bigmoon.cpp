#include <iostream>
using namespace std;

int main()
{
    // 7 11 17
    int arr[100];
    for(int i = 0; i<100; i++)
    {
        arr[i] = i+1;
    } //각 배열을 1~100으로 초기화
    for(int i = 1; i<=14; i++) // 1개씩
    {
        if(7*i <= 100)
        {
            arr[7*i]= 0;
        }
        if(11*i <= 100)
        {
            arr[11*i] = 0;
        }
        if(17*i<=100)
        {
            arr[17*i]= 0;
        }

    }
    

}