#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main()
{
    int input = 0;
    cin >> input;
    arr.resize(input);
    int Max = 0;
    int Min = 0;

    for(int i = 0; i< input; i++)
    {
        cin >> arr[i];
    }

    Max = arr[0];
    Min = arr[0];

    for(int i = 1; i< input; i++)
    {
        if(Max < arr[i])
        {
            Max = arr[i];
        }
        if(Min > arr[i])
        {
            Min= arr[i];
        }
    }
    
    cout << Min << " " << Max;

    return 0;
}