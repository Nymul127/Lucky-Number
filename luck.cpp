#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    int b = x % 10;

    int a = x / 10;
    if (b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (a > b)
        {
            if (a % b == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (b % a == 0)
            {
                cout << "YES" << endl;
            }
            else
            {

                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
