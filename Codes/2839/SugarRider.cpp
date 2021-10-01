#include <iostream>
using namespace std;
int main()
{
    int five=0, three=0, n = 0;
    cin >> n;
    while(1)
    {
        if(n % 5 == 0)
        {
            five = n/5;
            cout<< five + three << endl;
            return 0;
        }
        else if(n<0){
            cout << "-1"<< endl;
            return 0;
        }
        n = n - 3;
        three++;
    }

}