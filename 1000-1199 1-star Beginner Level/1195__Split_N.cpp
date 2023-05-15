#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    while (t --)
    {
        cin >> n;

        int oper = -1;

        while (n)
        {
            oper += (n & 1);
            n >>= 1;
        }

        cout << (oper) << "\n";
    }

    return 0;
}