#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    int arr[1000];
    bool Reload = true; // 한번 더 돌릴지
    int temp = 0; // 수 바꾸기 용
    cin >> input;

    
    for(int i = 0; i< input; i++)
    {
        cin >> arr[i];
    } // input = 5 이면 5번 반복해서 수 받음

    while(Reload)
    {
        Reload = false;
        for(int i = 1; i< input; i++)
        {
            if(arr[i] < arr[i-1])
            {
                Reload = true;

                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
            else
            {
                continue;
            }
        }

    }
    for(int i = 0; i < input; i++)
    {
        cout<< arr[i] << endl;
    }

    
}