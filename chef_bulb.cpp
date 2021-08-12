#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, k;
        cin >> n >> p >> k;

        int rem = 0;
        int count = 0;
        int i;
        while (rem >= 0)
        {
            for (i = 0; i < n; i++)
            {
                if (i % k == rem)
                {
                    count++;
                }
                if (i == p)
                {
                    break;
                }
            }
            
            rem++;
        }
        cout << count << endl;
    }

    return 0;
}